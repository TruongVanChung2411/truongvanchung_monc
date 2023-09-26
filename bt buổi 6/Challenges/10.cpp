#include <iostream>
using namespace std;

int main() {
    int years;
    double rainfall, totalRainfall = 0.0;

    // Ask the user for the number of years
    cout << "Enter the number of years: ";
    cin >> years;

    // Input validation for years
    while (years < 1) {
        cout << "Invalid input. Please enter a number greater than 0: ";
        cin >> years;
    }

    // Use nested loops to collect data and calculate the average rainfall
    for (int i = 1; i <= years; i++) {
        for (int j = 1; j <= 12; j++) {
            cout << "Enter the inches of rainfall for month " << j << " of year " << i << ": ";
            cin >> rainfall;

            // Input validation for rainfall
            while (rainfall < 0) {
                cout << "Invalid input. Please enter a non-negative number: ";
                cin >> rainfall;
            }

            totalRainfall += rainfall;
        }
    }

    // Display the results
    int totalMonths = years * 12;
    cout << "Number of months: " << totalMonths << endl;
    cout << "Total inches of rainfall: " << totalRainfall << endl;
    cout << "Average rainfall per month: " << totalRainfall / totalMonths << endl;

    return 0;
}
