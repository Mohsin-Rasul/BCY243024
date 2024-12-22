#include <iostream>
using namespace std;
int main() {
    int pass, mpass = 1234;
    string user, muser = "user";
    cout << "Enter your username: ";
    cin >> user;
    cout << "Enter your password: ";
    cin >> pass;
    cout << endl;
    if ((user == muser) && (pass == mpass))
        cout << "Access Granted" << endl;
    else
        cout << "Invalid Try again" << endl;
    return 0;
}
