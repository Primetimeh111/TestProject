#include <iostream>
using namespace std;
int main() {
    const int secretTarget = 42;
    int guess;
    int attempts = 0;
    cout << "Welcome to the Guessing Game!" << endl;
    cout << "Try to guess the secret number between 1 and 100." << endl;
    do {
        cout << "Enter your guess: ";
        cin >> guess;
        attempts++;
        if (guess < secretTarget) {
            cout << "Too low! Try again." << endl;
        } else if (guess > secretTarget) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the secret number " << secretTarget << " in " << attempts << " attempts." << endl;
        }
    } while (guess != secretTarget);
    
    return 0;
}