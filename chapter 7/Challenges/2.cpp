#include <iostream>
#include <string>
using namespace std;

int main() {
    double rainfall[12];
    string months[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    double total = 0, average;
    double maxRainfall, minRainfall;
    string maxMonth, minMonth;

    // Get input
    for(int i = 0; i < 12; ++i) {
        do {
            cout << "Enter the total rainfall for " << months[i] << ": ";
            cin >> rainfall[i];
            if (rainfall[i] < 0)
                cout << "Invalid input. Please enter a non-negative number.\n";
        } while (rainfall[i] < 0);
        total += rainfall[i];
    }

    // Calculate average
    average = total / 12;

    // Assume first element as max and min
    maxRainfall = rainfall[0];
    minRainfall = rainfall[0];
    maxMonth = months[0];
    minMonth = months[0];

    // Loop through the array
    for(int i = 1; i < 12; ++i) {
        // Compare elements of array with max and min
        if(rainfall[i] > maxRainfall) {
            maxRainfall = rainfall[i];
            maxMonth = months[i];
        }
        if(rainfall[i] < minRainfall) {
            minRainfall = rainfall[i];
            minMonth = months[i];
        }
    }

    // Display results
    cout << "Total rainfall for the year: " << total << endl;
    cout << "Average monthly rainfall: " << average << endl;
    cout << "Month with the highest amount of rainfall: " << maxMonth 
    << " (" << maxRainfall << ")" << endl;
    cout << "Month with the lowest amount of rainfall: " << minMonth 
    << " (" << minRainfall << ")" << endl;

    return 0;
}
