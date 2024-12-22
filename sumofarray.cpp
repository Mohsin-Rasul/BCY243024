#include <iostream>
using namespace std;
int sum(int a[][3], int r, int c) {
    int s = 0;
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            s += a[i][j];
        }
    }
    return s;
}
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    int a[3][3];
    cout << "Enter the elements of the 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    int total = sum(a, 3, 3);
    cout << "The sum of all elements in the array is: " << total << endl;
    return 0;
}