#include <iostream>
using namespace std;
int main() {
    cout << "Name:Mohsin Rasul\nReg No:BCY243024\n\n";
    int a[4][4];
    cout << "Enter element of array: ";
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4; ++j) {
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
}
