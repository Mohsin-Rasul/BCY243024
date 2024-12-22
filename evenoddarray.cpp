#include <iostream>
using namespace std;
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    int arr[5];
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int odd = 0, even = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        }
        else {
            odd++;
        }
    }
    cout << "Even numbers: " << even << endl;
    cout << "Odd numbers: " << odd << endl;
    return 0;
}
