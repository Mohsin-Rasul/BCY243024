#include<iostream>
#include<cmath>
using namespace std;
int main() {
	cout << "Name:Mohsin Rasul\nReg No:BCY243024\n\n";
	float a, b, c, disc, root, root1, root2,rpart, ipart;
	cout << "Enter the value of a: ";
	cin >> a;
	cout << "Enter the value of b: ";
	cin >> b;
	cout << "Enter the value of c: ";
	cin >> c;
	cout << endl;
	disc = b*b - 4 * a * c;
	if (disc > 0) {
		root1 = ( - b + sqrt(disc)) / (2 * a);
		root2 = (-b - sqrt(disc)) / (2 * a);
		cout << "Root 1 = " << root1 << endl;
		cout << "Root 2 = " << root2 << endl;
	}
	else if (disc == 0) {
		root = -b / (2 * a);
		cout << "Roots are equal \nRoot = " << root;
	}
	else {
		ipart = sqrt(-disc) / (2 * a);
		rpart = -b / (2 * a);
		cout << "Root 1 = " << rpart << " + " << ipart << "i" << endl;
		cout << "Root 2 = " << rpart << " - " << ipart << "i" << endl;
	}
	return 0;
}