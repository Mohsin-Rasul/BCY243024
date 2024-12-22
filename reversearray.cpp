#include <iostream>
using namespace std;
void reverse(int str[], int size) {
    for (int j = 0; j < size / 2; j++) {
        int temp = str[j];
        str[j] = str[size - 1 - j];
        str[size - 1 - j] = temp;
    }
}
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    const int size = 10;
    int str[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter number in array: ";
        cin >> str[i];
    }
    cout << "Your array: ";
    for (int i = 0; i < size; i++) {
        cout << str[i] << " ";
    }
    cout << endl;
    reverse(str, size);
    cout << "Reversed array: ";
    for (int i = 0; i < size; i++) {
        cout << str[i] << " ";
    }
    cout << endl;
    return 0;
}
