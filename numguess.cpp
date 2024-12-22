#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    cout << "Name:Mohsin Rasul\nReg No:BCY243024\n\n";
    srand(time(0));
    int secretNum = rand() % 6 + 1;
    int guess, attempts = 0, maxAttempts = 3;
    while (attempts < maxAttempts) {
        cout << "Guess a number between 1 and 6: ";
        cin >> guess;

        if (guess == secretNum) {
            cout << "You Win" << endl;
            break;
        }
        else {
            cout << "Try again." << endl;
            attempts++;
        }
    }
    if (attempts == maxAttempts) {
        cout << "Your guesses are over, The secret number was " << secretNum << endl;
    }
    return 0;
}