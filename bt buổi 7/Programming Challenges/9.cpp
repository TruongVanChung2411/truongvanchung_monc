#include <iostream>
using namespace std;

int main() {
    // Declare and initialize arrays
    long empId[7] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489}; // Array to hold employee IDs
    int hours[7]; // Array to hold hours worked by each employee
    double payRate[7], wages[7]; // Arrays to hold pay rate and wages of each employee

    // Get input and calculate wages
    for(int i = 0; i < 7; ++i) {
        do {
            cout << "Enter the number of hours worked by employee " << empId[i] << ": ";
            cin >> hours[i];
            if (hours[i] < 0)
                cout << "Invalid input. Please enter a non-negative number.\n";
        } while (hours[i] < 0);

        do {
            cout << "Enter the pay rate for employee " << empId[i] << ": ";
            cin >> payRate[i];
            if (payRate[i] < 15.00)
            cout << "Invalid input. Please enter a number greater than or equal to 15.00.\n";
        } while (payRate[i] < 15.00);

        // Calculate wages
        wages[i] = hours[i] * payRate[i];
    }

    // Display results
    for(int i = 0; i < 7; ++i) {
        cout << "Employee ID: " << empId[i] << endl;
        cout << "Gross Wages: " << wages[i] << endl;
    }

    return 0;
}
