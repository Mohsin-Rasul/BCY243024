#include <iostream>
using namespace std;
void print(int* matrix, int rows, int colm) {
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < colm; ++j) {
            cout << *(matrix + i * colm + j) << " ";
        }
        cout << endl;
    }
}
int main() {
    int matrix[3][3];
    cout << "Enter elements of the 3x3 matrix:" << endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            cin >> matrix[i][j];
        }
    }
    cout << "Matrix elements are:" << endl;
    print(&matrix[0][0], 3, 3);
    return 0;
}
