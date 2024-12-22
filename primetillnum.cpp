#include <iostream>
using namespace std;
void prime(int n) {
    bool isPrime;
    for (int num = 2; num < n; num++) {
        isPrime = true;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << num << " ";
        }
    }
}
int main() {
    cout << "Name:Mohsin Rasul\nReg No:BCY243024\n\n";
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;
    cout << "Prime numbers less than " << n << ": ";
    prime(n);
    cout << endl;
    return 0;
}