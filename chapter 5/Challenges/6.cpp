#include <iostream>
using namespace std;

int main() {
    int speed, time;

    // Ask the user for the speed of a vehicle and how many hours it has traveled
    cout << "What is the speed of the vehicle in mph? ";
    cin >> speed;
    cout << "How many hours has it traveled? ";
    cin >> time;

    // Input validation
    while (speed < 0 || time < 1) {
        cout << "Invalid input. Please enter a non-negative speed and time greater than 0: ";
        cin >> speed >> time;
    }

    // Display the distance the vehicle has traveled for each hour
    cout << "Hour" << "\tDistance Traveled" << endl;
    cout << "--------------------------------" << endl;
    for (int i = 1; i <= time; i++) {
        cout << i << "\t" << i * speed << endl;
    }

    return 0;
}
