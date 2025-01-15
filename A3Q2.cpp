#include <iostream>
using namespace std;
void reverse(int* a, int size) {
    for (int i = 0; i < size / 2; ++i) {
        int temp = *(a + i);
        *(a + i) = *(a + size - 1 - i);
        *(a + size - 1 - i) = temp;
    }
}
int main() {
    const int n = 5;
    int a[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    reverse(a, n);
    cout << "Reversed Array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
