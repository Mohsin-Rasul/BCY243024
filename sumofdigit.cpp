#include <iostream>
using namespace std;
int main() {
    cout << "Name:Mohsin Rasul\nReg No:BCY243024\n\n";
    int num;
    cout << "Enter a number: ";
    cin >> num;
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    while (sum < 9) {
        int temp = 0;
        while (sum > 0) {
            temp += sum % 10;
            sum /= 10;
        }
        sum = temp;
    }
    cout << "The sum of digits: " << sum << endl;
    return 0;
}