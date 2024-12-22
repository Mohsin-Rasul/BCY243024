#include <iostream>
using namespace std;
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}
int main() {
    cout << "Name:Mohsin Rasul\nReg No:BCY243024\n\n";
    int num, onum, digit, sum = 0;
    cout << "Enter a number: ";
    cin >> num;
    onum = num;
    while (num > 0) {
        digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    if (sum == onum) {
        cout << onum << " is a strong number." << endl;
    }
    else {
        cout << onum << " is not a strong number." << endl;
    }
    return 0;
}