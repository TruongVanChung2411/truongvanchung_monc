#include <iostream>
using namespace std;

int main() {
    int startingNumber, days;
    double dailyIncrease;

    cout << "Enter the initial population size: ";
    cin >> startingNumber;
    while (startingNumber < 2) {
        cout << "The initial population size must be 2 or more. Please re-enter: ";
        cin >> startingNumber;
    }

    cout << "Enter the average daily population increase (as a percentage): ";
    cin >> dailyIncrease;
    while (dailyIncrease < 0) {
        cout << "The average daily population increase cannot be negative. Please re-enter: ";
        cin >> dailyIncrease;
    }
    dailyIncrease /= 100; // Convert from percentage to decimal

    cout << "Enter the number of days the population will multiply: ";
    cin >> days;
    while (days < 1) {
        cout << "The number of days must be 1 or more. Please re-enter: ";
        cin >> days;
    }

    for (int i = 1; i <= days; i++) {
        startingNumber += startingNumber * dailyIncrease;
        cout << "Day " << i << ": " << startingNumber << endl;
    }

    return 0;
}
