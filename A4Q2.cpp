#include <iostream>
#include <string>
using namespace std;

struct Address {
    string city;
    string zipCode;
};

struct Employee {
    string name;
    string employeeID;
    float salary;
    Address address;
};

int main() {
    Employee emp;

    cout << "Enter employee details:" << endl;
    cout << "Name: ";
    getline(cin, emp.name);
    cout << "Employee ID: ";
    cin >> emp.employeeID;
    cout << "Salary: ";
    cin >> emp.salary;

    cin.ignore();
    cout << "Enter address details:" << endl;
    cout << "City: ";
    getline(cin, emp.address.city);
    cout << "Zip Code: ";
    getline(cin, emp.address.zipCode);

    cout << "\nEmployee Details:" << endl;
    cout << "Name: " << emp.name << endl;
    cout << "Employee ID: " << emp.employeeID << endl;
    cout << "Salary: " << emp.salary << endl;
    cout << "City: " << emp.address.city << endl;
    cout << "Zip Code: " << emp.address.zipCode << endl;

    return 0;
}
