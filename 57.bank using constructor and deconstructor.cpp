#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    
    BankAccount(string accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
        cout << "Account created with account number " << accountNumber << endl;
    }

   
    ~BankAccount() {
        cout << "Account with account number " << accountNumber << " is destroyed" << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << " into account " << accountNumber << ". New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrawn " << amount << " from account " << accountNumber << ". New balance: " << balance << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

   
    void displayBalance() {
        cout << "Current balance of account " << accountNumber << ": " << balance << endl;
    }
};

int main() {
   
    BankAccount acc1("1001", 5000);  
    BankAccount acc2("1002", 10000); 

    // Depositing and withdrawing money
    acc1.deposit(2000);
    acc1.withdraw(1000);
    acc2.deposit(500);
    acc2.withdraw(15000); // This will fail due to insufficient balance

    // Displaying final balances
    acc1.displayBalance();
    acc2.displayBalance();

    return 0;
}
