#include <iostream>
using namespace std;
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    int arr[5];
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }
    cout << "The sum of all elements is: " << sum << endl;
    return 0;
}