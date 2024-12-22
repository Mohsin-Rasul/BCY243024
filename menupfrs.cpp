#include <iostream>
using namespace std;
int fact(int n) {
    if (n <= 1)
        return 1;
    else
        return n * fact(n - 1);
}
bool prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    int n;
    int choice;
    do {
        cout << "Menu\n1 - Factorial of a Number\n2 - Check Prime\n3 - Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        if (choice != 3) {
            cout << "Enter a number: ";
            cin >> n;
        }
        cout << endl;
        switch (choice) {
        case 1: {
            int result = fact(n);
            cout << "Factorial of " << n << " is " << result << endl;
            cout << endl;
            break;
        }
        case 2: {
            if (prime(n)) {
                cout << n << " is a Prime number." << endl;
                cout << endl;
            }
            else {
                cout << n << " is not a Prime number." << endl;
                cout << endl;
            }
            break;
        }
        case 3:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (choice != 3);
    return 0;
}
