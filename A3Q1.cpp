#include <iostream>
using namespace std;
void print(int* a, int row, int colm) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < colm; ++j) {
            cout << *(a + i * colm + j) << " "; 
        }
        cout << endl;
    }
}
int main() {
    int row = 3, colm = 3;
    int a[3][3];
    cout << "Enter values for array:" << endl;
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < colm; ++j) {
            cin >> a[i][j];
        }
    }
    cout << "2D Array:" << endl;
    print(&a[0][0], row, colm);
    return 0;
}
