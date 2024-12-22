#include <iostream>
#include <cmath>
using namespace std;
void calculate(float r, float theta, float& x, float& y) {
    x = r * cos(theta);
    y = r * sin(theta);
}
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    float x, y;
    float r, theta;
    cout << "Give value of r: ";
    cin >> r;
    cout << "Give value of theta: ";
    cin >> theta;
    calculate(r, theta, x, y);
    cout << "Result x, y is: " << x << ", " << y;
    return 0;
}
