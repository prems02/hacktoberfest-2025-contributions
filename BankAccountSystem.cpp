#include <iostream>
using namespace std;

class BankAccount {
    string name;
    double balance;

public:
    BankAccount(string n, double b) {
        name = n;
        balance = b;
    }

    void deposit(double amount) {
        balance += amount;
    }

    void withdraw(double amount) {
        if (amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance!" << endl;
    }

    void display() {
        cout << "Account Holder: " << name << "\nBalance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Himanshu", 5000);
    acc.display();
    acc.deposit(1500);
    acc.withdraw(2000);
    acc.display();
    return 0;
}
