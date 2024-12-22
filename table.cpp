#include <iostream>
using namespace std;
int main() {
    cout << "Name:Mohsin Rasul\nReg No:BCY243024\n\n";
    int num;
    cout << "Enter a number: ";
    cin >> num;
    for (int i = 1; i <= 10; ++i) {
        cout << num << " x " << i << " = " << num * i << endl;
    }
    return 0;
}