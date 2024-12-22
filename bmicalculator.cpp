#include <iostream>
using namespace std;

int main() {
    float weight, feet, meters, bmi;
    cout << "Enter your weight in kilograms: ";
    cin >> weight;
    cout << "Enter your height in feet: ";
    cin >> feet;

    meters = feet * 0.3048;

    bmi = weight / (meters * meters);

    cout << "Your BMI is: " << bmi << endl;

    if (bmi < 18.5) {
        cout << "Category: Underweight" << endl;
    }
    else if (bmi >= 18.5 && bmi < 24.9) {
        cout << "Category: Normal weight" << endl;
    }
    else if (bmi >= 25 && bmi < 29.9) {
        cout << "Category: Overweight" << endl;
    }
    else {
        cout << "Category: Obesity" << endl;
    }
    return 0;
}

