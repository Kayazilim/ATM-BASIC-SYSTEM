# 🏦 Basic ATM System (C++ CLI)

A robust, object-oriented console application simulating an ATM system. It features file-based data persistence, advanced input validation, and security protocols.

---

## 🇬🇧 English

### 🚀 Features
* **Data Persistence:** Saves balance, PIN, block status, and daily withdrawal limits to `account_data.txt`. Data is safe even after the app is closed.
* **Advanced Security:** The account is automatically blocked after 3 consecutive incorrect PIN attempts.
* **Transaction Logging:** Records every action (deposit, withdrawal, PIN change) in `transaction_history.txt`. Uses modern and thread-safe `strftime` for accurate timestamps.
* **Input Validation (Crash-Proof):** Robust error handling prevents the system from crashing if a user enters invalid characters (e.g., letters instead of numbers).
* **Daily Limit:** Enforces a 5000 USD daily withdrawal limit, which persists across application restarts.
* **File Corruption Check:** Detects if the data file is manually altered or corrupted, preventing fatal errors and logic bugs upon launch.
* **Automatic Setup:** If no account data is detected, the system prompts the user to perform an initial setup on the first run.

### 🛠️ Technical Details
* **Language:** C++11 or higher
* **Paradigm:** Object-Oriented Programming (OOP)
* **Time Handling:** Cross-platform safe time formatting using `strftime` and `localtime_s`/`localtime_r`.
* **Documentation:** Professional Doxygen style comments included in the source code.

### ⚙️ Installation & Usage
1. **Clone the repository:**
   ```bash
   git clone [https://github.com/yourusername/Basic-ATM-System.git](https://github.com/yourusername/Basic-ATM-System.git)
Compile the code (using g++):

Bash

g++ main.cpp Account.cpp -o BasicATM
Run the application:

Bash

./BasicATM
(Note: Add account_data.txt and transaction_history.txt to your .gitignore file so user data is not pushed to the public repository).

🇹🇷 Türkçe
Nesne Yönelimli Programlama (OOP) prensipleriyle geliştirilmiş; dosya tabanlı veri saklama, giriş doğrulama ve gelişmiş güvenlik protokollerine sahip sağlam bir ATM simülasyonu.

🚀 Özellikler
Kalıcı Veri: Bakiye, şifre, bloke durumu ve günlük çekim limitini account_data.txt dosyasına kaydeder. Uygulama kapansa bile veriler kaybolmaz.

Gelişmiş Güvenlik: 3 kez üst üste hatalı şifre girişinde hesabı otomatik olarak bloke eder.

İşlem Kayıtları (Logging): Para yatırma, çekme ve şifre değişimi gibi tüm işlemleri transaction_history.txt dosyasına yazar. Zaman damgaları için modern ve güvenli strftime fonksiyonu kullanılmıştır.

Giriş Doğrulama (Crash-Proof): Kullanıcının sayı yerine harf/sembol girmesi gibi durumlarda sistemin sonsuz döngüye girip çökmesi engellenmiştir.

Günlük Limit: Güvenlik gereği uygulanan 5000 USD'lik günlük para çekme limiti, program kapatılıp açılsa bile dosyadan okunarak korunur.

Dosya Bozulma Koruması: Kayıt dosyasına dışarıdan hatalı müdahale edildiğinde (eksik veri girildiğinde vb.) sistemi güvenli bir şekilde durdurarak mantık hatalarını önler.

İlk Kurulum: Eğer sistemde kayıtlı bir hesap yoksa, uygulama ilk açılışta kullanıcıdan başlangıç verilerini ister.

🛠️ Teknik Detaylar
Programlama Dili: C++11 veya üzeri

Yaklaşım: Nesne Yönelimli Programlama (OOP)

Zaman Yönetimi: strftime ve localtime_s kullanılarak bellek taşması (buffer overflow) riskine karşı güvenli (thread-safe) tarih formatlama.

Dökümantasyon: Kaynak kod içerisinde Doxygen formatında profesyonel İngilizce yorum satırları.

⚙️ Kurulum ve Çalıştırma
Repoyu bilgisayarınıza indirin:

Bash

git clone [https://github.com/kullaniciadi/Basic-ATM-System.git](https://github.com/kullaniciadi/Basic-ATM-System.git)
Derleyin (g++ kullanarak):

Bash

g++ main.cpp Account.cpp -o BasicATM
Çalıştırın:

Bash

./BasicATM
(Not: Kullanıcı verilerinin genel GitHub reposuna gitmesini engellemek için account_data.txt ve transaction_history.txt dosyalarını .gitignore dosyanıza eklemeyi unutmayın).

👨‍💻 Author
Developer: Kayazilim

Project Name: Basic ATM System
