#include <iostream>
#include <string>
using namespace std;

struct Book {
    string title;
    string author;
    float price;
};

int main() {
    Book books[3];

    for (int i = 0; i < 3; ++i) {
        cout << "Enter details for book " << i + 1 << ":" << endl;
        cout << "Title: ";
        getline(cin, books[i].title);
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Price: ";
        cin >> books[i].price;
        cin.ignore();  
        cout << endl;
    }

    cout << "Books with price greater than 500:" << endl;
    for (int i = 0; i < 3; ++i) {
        if (books[i].price > 500) {
            cout << "Title: " << books[i].title << endl;
            cout << "Author: " << books[i].author << endl;
            cout << "Price: " << books[i].price << endl;
            cout << endl;
        }
    }

    return 0;
}
