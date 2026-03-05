#include "Account.h"
#include <fstream>
#include <iostream>
#include <string>
#include <ctime>

double Account::getBalance() const {
    return balance;
}

void Account::deposit(double amount) {
    if (amount > 0) {
        balance += amount;
        logTransaction("DEPOSIT: +" + std::to_string((int)amount) + " USD");
        saveToFile();
    }
    else {
        std::cout << "ERROR: Invalid amount!\n";
    }
}

bool Account::withdraw(double amount) {
    const double DAILY_LIMIT = 5000.0;

    if (amount <= 0) {
        std::cout << "ERROR: Invalid amount!\n";
        return false;
    }
    if (amount > balance) {
        std::cout << "ERROR: Insufficient funds!\n";
        return false;
    }
    if (dailyWithdrawnTotal + amount > DAILY_LIMIT) {
        std::cout << "ERROR: Daily limit (5000 USD) exceeded! You already withdrew " << dailyWithdrawnTotal << " USD today.\n";
        return false;
    }

    balance -= amount;
    dailyWithdrawnTotal += amount;
    logTransaction("WITHDRAWAL: -" + std::to_string((int)amount) + " USD");
    saveToFile();
    return true;
}

bool Account::verifyPin(int inputPin) const {
    return (pin == inputPin);
}

void Account::changePin(int newPin) {
    if (newPin >= 1000 && newPin <= 9999) {
        pin = newPin;
        logTransaction("PIN_CHANGE: Success");
        saveToFile();
    }
    else {
        std::cout << "ERROR: PIN must be 4 digits!\n";
    }
}

void Account::setBlock() {
    isBlocked = true;
    logTransaction("SECURITY: Account Blocked");
    saveToFile();
}

void Account::saveToFile() const {
    std::ofstream file("account_data.txt");
    if (file.is_open()) {
        file << balance << " " << pin << " " << isBlocked << " " << dailyWithdrawnTotal;
        file.close();
    }
}

void Account::logTransaction(std::string action) {
    std::ofstream logFile("transaction_history.txt", std::ios::app);
    if (logFile.is_open()) {
        time_t now = time(0);
        struct tm ltm;
        char buffer[80];

        // Safe time handling for Windows/Linux
#ifdef _WIN32
        localtime_s(&ltm, &now);
#else
        localtime_r(&now, &ltm);
#endif

        strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", &ltm);

        logFile << "[" << buffer << "] " << action << " | Balance: " << balance << " USD" << std::endl;
        logFile.close();
    }
}