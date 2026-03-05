#pragma once
#include <string>

/**
 * @class Account
 * @brief Manages banking operations with persistent data and security.
 */
class Account {
private:
    double balance;               ///< Current account balance
    int accountNumber;            ///< Unique ID for the account
    int pin;                      ///< 4-digit security PIN
    bool isBlocked;               ///< Account status (true if locked)
    double dailyWithdrawnTotal;   ///< Tracker for the 5000 USD daily limit

public:
    /**
     * @brief Constructor for the Account class.
     */
    Account(double b, int accNum, int p, bool blocked = false, double daily = 0.0)
        : balance(b), accountNumber(accNum), pin(p), isBlocked(blocked), dailyWithdrawnTotal(daily) {
    }

    double getBalance() const;
    void deposit(double amount);
    bool withdraw(double amount);
    bool verifyPin(int inputPin) const;
    void changePin(int newPin);
    bool getBlockStatus() const { return isBlocked; }
    void setBlock();
    void saveToFile() const;
    void logTransaction(std::string action);
};
