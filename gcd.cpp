#include <iostream>
using namespace std;
int GCD(int n1, int n2) {
    if (n2 == 0) {
        return n1;
    }
    return GCD(n2, n1 % n2);
}
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    int n1, n2;
    cout << "Enter the first number: ";
    cin >> n1;
    cout << "Enter the second number: ";
    cin >> n2;
    int result = GCD(n1, n2);
    cout << "The GCD is: " << result;
    return 0;
}
