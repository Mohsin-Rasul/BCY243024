#include <iostream>
#include <string>

using namespace std;

int main() { 
    string word;
    cout << "Enter a Word: ";
    cin >> word;
    int n = word.length();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j || i + j == n - 1) {
                cout << word[i];
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}