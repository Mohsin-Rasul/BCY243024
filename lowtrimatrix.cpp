#include <iostream>
using namespace std;
void checkLower(int a[][3], int n) {
    bool isLower = true;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j && a[i][j] != 0) {
                isLower = false;
                break;
            }
        }
    }
    if (isLower) {
        cout << "The matrix is lower triangular.\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
    else {
        cout << "The matrix is not lower triangular.\n";
    }
}
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    int a[3][3] = { {1, 0, 0}, {2, 3, 0}, {4, 5, 6} };
    int n = 3;
    checkLower(a, n);
    return 0;
}