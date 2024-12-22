#include <iostream>
#include <cmath>
using namespace std;
int main() {
    cout << "Name:Mohsin Rasul\nReg No:BCY243024\n\n";
    for (int num = 1; num <= 1000; ++num) {
        int son = sqrt(num);
        if (son * son == num) {
            cout << num << " is a perfect number" << endl;
        }
    }
    return 0;
}