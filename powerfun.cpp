#include <iostream>
using namespace std;
int power(int base, int exponent) {
    if (exponent == 0) {
        return 1;
    }
    else {
        return base * power(base, exponent - 1);
    }
}
int main() {
    cout << "Name:Mohsin Rasul\nReg No:BCY243024\n\n";
    int base, exponent, result;
    cout << "Enter the base: ";
    cin >> base;
    cout << "Enter the exponent: ";
    cin >> exponent;
    result = power(base, exponent);
    cout << base << "^" << exponent << " = " << result << endl;
    return 0;
}