#include <iostream>
using namespace std;

int main() {
    int sideLength;

    // Ask the user for a positive integer no greater than 15
    cout << "Enter a positive integer no greater than 15: ";
    cin >> sideLength;

    // Input validation
    while (sideLength < 1 || sideLength > 15) {
        cout << "Invalid input. Please enter a positive integer no greater than 15: ";
        cin >> sideLength;
    }

    // Display the square
    for (int i = 0; i < sideLength; i++) {
        for (int j = 0; j < sideLength; j++) {
            cout << 'X';
        }
        cout << '\n';
    }

    return 0;
}
