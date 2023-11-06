#include <iostream>
using namespace std;

int main() {
    int number, sum = 0;

    // Ask the user for a positive integer value
    cout << "Enter a positive integer: ";
    cin >> number;

    // Input validation
    while (number < 0) {
        cout << "Invalid input. Please enter a positive integer: ";
        cin >> number;
    }

    // Use a loop to get the sum of all integers from 1 up to the number entered
    for (int i = 1; i <= number; i++) {
        sum += i;
    }

    // Display the sum
    cout << "The sum of all integers from 1 to " << number << " is " << sum << endl;

    return 0;
}
