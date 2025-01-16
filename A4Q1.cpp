#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    string rollNumber;
    float marks;
};

int main() {
    Student students[5];

    for (int i = 0; i < 5; i++) {
        cout << "Enter details for student " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin.ignore();  
        getline(cin, students[i].name); 
        cout << "Roll Number: ";
        cin >> students[i].rollNumber;  
        cout << "Marks: ";
        cin >> students[i].marks; 
        cout << endl;
    }

    cout << "Student Details:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ":" << endl;
        cout << "Name: " << students[i].name << endl;
        cout << "Roll Number: " << students[i].rollNumber << endl;
        cout << "Marks: " << students[i].marks << endl;
        cout << endl;
    }

    return 0;
}
