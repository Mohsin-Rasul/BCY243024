#include<iostream>
using namespace std;
int main(){
	cout << "Name: Mohsin Rasul\nReg No: BCY243024\n\n";
	int n;
	cout << "Enter the number: ";
	cin >> n;
	if (n > 1) {
		if ((n % 2 == 0) && (n % 3 == 0)) 
			cout << "It is divisile by both."<<endl;
		else if (n % 2 == 0)
			cout << "It is divisile by 2" << endl;
		else if (n % 3 == 0) 
			cout << "It is divisible by 3" << endl;
		else 
			cout << "It is not divisile" << endl;;
	}
	else {
		cout << "Invalid" << endl;;
	}
	return 0;
}