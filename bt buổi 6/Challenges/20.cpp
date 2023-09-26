#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));  // Seed the random number generator

    int randomNumber = rand() % 100 + 1;  // Generate random number between 1 and 100

    cout << "Guess the number between 1 and 100: ";
    int guess;
    cin >> guess;

    while (guess != randomNumber) {
        if (guess > randomNumber) {
            cout << "Too high, try again: ";
        } else {
            cout << "Too low, try again: ";
        }
        cin >> guess;
    }

    cout << "Congratulations! You guessed the number.\n";

    return 0;
}
