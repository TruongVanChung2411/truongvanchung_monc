#include <iostream>
using namespace std;

int main() {
    int number, max, min;

    // Enter the first number
    cout << "Enter an integer (enter -99 to end): ";
    cin >> number;

    // Set initial values for max and min
    max = number;
    min = number;

    while (number != -99) {
        // Update max and min
        if (number > max) {
            max = number;
        }
        if (number < min) {
            min = number;
        }

        // Enter the next number
        cout << "Enter an integer (enter -99 to end): ";
        cin >> number;
    }

    // Display the largest and smallest numbers
    cout << "The largest number entered was " << max << endl;
    cout << "The smallest number entered was " << min << endl;

    return 0;
}
