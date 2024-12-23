#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double base, perpendicular;
    cout << "Enter Base: ";
    cin >> base;
    cout << "Enter Perpendicular: ";
    cin >> perpendicular;

    cout <<"Hypetenuse: " << sqrt(base * base + perpendicular * perpendicular);

    return 0;
}
