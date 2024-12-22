#include <iostream>
using namespace std;
void transpose(int mat[][3], int r, int c, int res[][3]) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            res[j][i] = mat[i][j];
        }
    }
}
int main() {
    cout << "Name:Mohsin Rasul\nReg No:BCY243024\n\n";
    int mat[3][3];
    cout << "Enter the elements of the 3x3 matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> mat[i][j];
        }
    }
    int res[3][3];
    transpose(mat, 3, 3, res);
    cout << "\nTransposed Matrix:\n";
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << res[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}