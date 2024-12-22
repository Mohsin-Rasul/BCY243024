#include <iostream>
#include <string>
using namespace std;
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    string str1, str2;
    int isSame = 1;
    cout << "Enter the first string: ";
    cin >> str1;
    cout << "Enter the second string: ";
    cin >> str2;
    if (str1.length() != str2.length()) {
        isSame = 0;
    }
    else {
        for (int i = 0; i < str1.length(); i++) {
            if (str1[i] != str2[i]) {
                isSame = 0;
                break;
            }
        }
    }
    if (isSame == 1)
        cout << "strings are same";
    else
        cout << "strings are not same";
    return 0;
}
