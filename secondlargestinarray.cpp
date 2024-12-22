#include <iostream>
using namespace std;
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    int arr[5];
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int large = arr[0];
    int seclarge = arr[0];
    for (int i = 1; i < 5; i++) {
        if (arr[i] > large) {
            seclarge = large;
            large = arr[i];
        }
        else if (arr[i] > seclarge && arr[i] != large) {
            seclarge = arr[i];
        }
    }
    if (large == seclarge) {
        cout << "No second largest element exists." << endl;
    }
    else {
        cout << "The second largest element is: " << seclarge << endl;
    }
    return 0;
}