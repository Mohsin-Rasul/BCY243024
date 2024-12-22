#include <iostream>
using namespace std;

int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    char a;
    cout << "Enter something: ";
    cin >> a;
    if (a >= '0' && a <= '9') {
        cout << "It's a Number" << endl;
    }
    else if (a >= 'A' && a <= 'Z') {
        cout << "It's an Uppercase Letter" << endl;
    }
    else if (a >= 'a' && a <= 'z') {
        cout << "It's a Lowercase Letter" << endl;
    }
    else {
        cout << "It's a Special Character" << endl;
    }
    return 0;
}
