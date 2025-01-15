#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string name;
    int n;

    cout << "Enter the number of names to append: ";
    cin >> n;
    cin.ignore(); 

    ofstream file("names.txt", ios::app);
    if (!file) {
        cout << "Unable to open file for appending." << endl;
        return 1;
    }


    for (int i = 0; i < n; ++i) {
        cout << "Enter name " << i + 1 << ": ";
        getline(cin, name);
        file << name << endl;
    }

    cout << "Names have been appended to names.txt." << endl;

    file.close();

    return 0;
}
