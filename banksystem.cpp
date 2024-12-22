#include<iostream>
using namespace std;
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    int balance, deposit, withdraw;
    cout << "Enter balance: ";
    cin >> balance;
    int choice;
    do {
        cout << "Menu\n1 - Deposit\n2 - Withdraw\n3 - Check Balance\n4 - Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cout << endl;
        switch (choice) {
        case 1: {
            cout << "Enter Ammount: ";
            cin >> deposit;
            balance += deposit;
            cout << "Total Balance: " << balance << endl;
            cout << endl;
            break;
        }
        case 2: {
            cout << "Enter Ammount: ";
            cin >> withdraw;
            balance -= withdraw;
            cout << "Total Balance: " << balance << endl;
            cout << endl;
            break;
        }
        case 3:
            cout << "Balance: "<<balance << endl;
            break;
        case 4:
            cout << "Exit";
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (choice != 4);
    return 0;
}
