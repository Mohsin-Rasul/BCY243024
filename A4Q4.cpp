#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string line;

    cout << "Enter a string: ";
    getline(cin, line);

    ofstream file("output.txt");
    if (file.is_open()) {
        file << line;
        file.close();  
        cout << "String saved to output.txt successfully." << endl;
    }
    else {
        cout << "Unable to open file for writing." << endl;
        return 1;
    }

    ifstream readfile("output.txt");
    if (readfile.is_open()) {
        string data;
        getline(readfile, data);
        cout << "Content of output.txt: " << data << endl;
        readfile.close(); 
    }
    else {
        cout << "Unable to open file for reading." << endl;
        return 1;
    }

    return 0;
}
