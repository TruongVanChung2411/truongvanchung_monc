#include <iostream>
using namespace std;

int main() {
    int floors, rooms, occupied, totalRooms = 0, totalOccupied = 0;

    // Ask the user how many floors the hotel has
    cout << "How many floors does the hotel have? ";
    cin >> floors;

    // Input validation for floors
    while (floors < 1) {
        cout << "Invalid input. Please enter a number greater than 0: ";
        cin >> floors;
    }

    // Loop through each floor
    for (int i = 1; i <= floors; i++) {
        // Skip the thirteenth floor
        if (i == 13) continue;

        // Ask the user for the number of rooms on the floor and how many of them are occupied
        cout << "How many rooms does floor " << i << " have? ";
        cin >> rooms;
        cout << "How many rooms on floor " << i << " are occupied? ";
        cin >> occupied;

        // Input validation for rooms
        while (rooms < 10) {
            cout << "Invalid input. Please enter a number greater than or equal to 10: ";
            cin >> rooms;
        }

        // Update the total number of rooms and occupied rooms
        totalRooms += rooms;
        totalOccupied += occupied;
    }

    // Display the results
    cout << "The hotel has " << totalRooms << " rooms.\n";
    cout << totalOccupied << " of them are occupied.\n";
    cout << totalRooms - totalOccupied << " of them are unoccupied.\n";
    cout << "The occupancy rate is " << static_cast<double>(totalOccupied) / totalRooms * 100 << "%.\n";

    return 0;
}
