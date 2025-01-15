#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string file, file2;

    cout << "Enter the source file name: ";
    cin >> file;
    cout << "Enter the destination file name: ";
    cin >> file2;

    ofstream mainfile(file, ios::out);
    if (!mainfile) {
        cout << "Unable to create the source file." << endl;
        return 1;
    }

    mainfile << "My Name is Mohsin.\n";

    mainfile.close();

    ofstream copyfile(file2, ios::out);
    if (!copyfile) {
        cout << "Unable to create the destination file." << endl;
        return 1;
    }

    ifstream sourcefile(file, ios::in);
    if (!sourcefile) {
        cout << "Unable to open the source file to copy content." << endl;
        return 1;
    }

    string line;
    while (getline(sourcefile, line)) {
        copyfile << line << endl;
    }

    cout << "Contents copied successfully from " << file << " to " << file2 << "." << endl;

    sourcefile.close();
    copyfile.close();

    return 0;
}
