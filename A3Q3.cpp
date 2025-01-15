#include <iostream>
using namespace std;
int sum(int* a, int size) {
    int total = 0;
    for (int i = 0; i < size; ++i) {
        total += *(a + i);
    }
    return total;
}
int main() {
    const int n = 5;
    int a[n];
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int total = sum(a, n);
    cout << "Sum of the array: " << total << endl;
    return 0;
}
