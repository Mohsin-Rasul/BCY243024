#include <iostream>
using namespace std;
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    const int n = 5;
    int a[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int index1, index2;
    cout << "Enter index1 of to swap: ";
    cin >> index1;
    cout << "Enter index2 of to swap: ";
    cin >> index2;
    swap(&a[index1], &a[index2]);
    cout << "Swapped Array:" << endl;
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
