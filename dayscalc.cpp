#include <iostream>
using namespace std;
int dayscalc(int d1, int m1, int y1, int d2, int m2, int y2) {
    int days = 0;
    days += (y2 - y1) * 360;
    days += (m2 - m1) * 30;
    days += d2 - d1;
    return days;
}
int main() {
    cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
    int d1, m1, y1, d2, m2, y2;
    cout << "Enter the first date (DD MM YYYY): ";
    cin >> d1 >> m1 >> y1;
    cout << "Enter the second date (DD MM YYYY): ";
    cin >> d2 >> m2 >> y2;
    int daysdiff = dayscalc(d1, m1, y1, d2, m2, y2);
    cout << "Number of days between the two dates: " << daysdiff << endl;
    return 0;
}