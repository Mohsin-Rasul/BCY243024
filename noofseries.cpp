#include <iostream>
using namespace std;
int main() {
	cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
	const int size = 20;
	float array[size];
	for (int i = 0; i < size; i++) {
		array[i] = 1.0f / (i + 1);
	}
	cout << "The terms of the series are:" << endl;
	for (int i = 0; i < size; i++) {
		cout << array[i] << endl;
	}
	return 0;
}
