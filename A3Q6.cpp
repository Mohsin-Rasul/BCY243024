#include <iostream>
using namespace std;

int main() {
    int arr[] = { 10, 20, 30, 40 };

    cout << "Using arr[2]: " << arr[2] << endl;
    cout << "Using *(arr + 2): " << *(arr + 2) << endl;

    return 0;
}
