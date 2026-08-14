#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNo;
    float balance;

public:
    void getData() {
        cout << "Enter Account Number: ";
        cin >> accountNo;
        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    void deposit(float amount) {
        balance += amount;
        cout << "Amount Deposited Successfully\n";
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount Withdrawn Successfully\n";
        } else {
            cout << "Insufficient Balance\n";
        }
    }

    void display() {
        cout << "Account Number: " << accountNo << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount b;
    float amount;

    b.getData();

    cout << "Enter deposit amount: ";
    cin >> amount;
    b.deposit(amount);

    cout << "Enter withdrawal amount: ";
    cin >> amount;
    b.withdraw(amount);

    cout << "\nAccount Details:\n";
    b.display();

    return 0;
}