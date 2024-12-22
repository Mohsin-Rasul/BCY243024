#include <iostream>
using namespace std;
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    int max;
    int str[10];
    for (int i = 0; i < 10; i++) {
        cout << "Enter Number in array: ";
        cin >> str[i];
    }
    max = str[0];
    for (int j = 1; j < 10; j++) { 
        if (str[j] > max) {
            max = str[j];
        }
    }
    cout << "Maximum of the number is: " << max;
    return 0;
}
