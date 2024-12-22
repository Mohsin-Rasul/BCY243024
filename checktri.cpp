#include <iostream>
using namespace std;
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    int a, b, c;
    cout << "Enter length of a: ";
    cin >> a;
    cout << "Enter length of b: ";
    cin >> b;
    cout << "Enter length of c: ";
    cin >> c;
    cout << endl;
    if (a + b > c && a + c > b && b + c > a)
        cout << "Valid triangle." << endl;
    else
        cout << "Invalid triangle." << endl;
    return 0;
}