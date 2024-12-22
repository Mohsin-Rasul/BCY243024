#include <iostream>
using namespace std;
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    const int size = 50;
    char str[size];
    int vowel = 0;
    cout << "Enter a string : ";
    cin >> str, size;
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowel++;
        }
    }
    cout << "Number of vowels: " << vowel << endl;
    return 0;
}
