#include <iostream>
using namespace std;
bool pdrom(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}
int main() {
    cout << "Name:Mohsin Rasul\nReg No:BCY243024\n\n";
    int arr[4];
    cout << "Enter the 4 elements of the array:\n";
    for (int i = 0; i < 4; i++) {
        cin >> arr[i];
    }
    if (pdrom(arr, 4)) {
        cout << "The array is a palindrome." << endl;
    }
    else {
        cout << "The array is not a palindrome." << endl;
    }
    return 0;
}