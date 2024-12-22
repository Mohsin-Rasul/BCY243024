#include <iostream>
using namespace std;
int main() {
	cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
	int marks;
	cout << "Enter your marks: ";
	cin >> marks;
	if (marks >= 90)
		cout << "A Grade";
	else if (marks <= 89 && marks >= 80)
		cout << "A- Grade";
	else if (marks <= 79 && marks >= 70)
		cout << "B Grade";
	else if (marks <= 69 && marks >= 60)
		cout << "C Grade";
	else
		cout << "F Grade";
	return 0;
}