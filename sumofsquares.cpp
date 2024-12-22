#include <iostream>
using namespace std;
int main() {
    cout << "Name:Mohsin Rasul\nReg No:BCY243024\n\n";
    int n, i = 1, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;
    do {
        sum += i * i;
        i++;
    } while (i <= n);
    cout << "The sum of squares of first " << n << " natural numbers is: " << sum << endl;
    return 0;
}