#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double membershipFee = 2500.0; // Initialize the initial membership fee
    double increaseRate = 0.04; // The annual increase rate

    cout << "Year" << setw(20) << "Membership Fee" << endl;
    cout << "---------------------------------" << endl;

    // Display the projected rates for the next six years
    for (int year = 1; year <= 6; year++) {
        membershipFee += membershipFee * increaseRate; // Calculate the membership fee for the next year
        cout << setw(4) << year << setw(20) << fixed << setprecision(2) << membershipFee << endl; // Display the membership fee
    }

    return 0;
}
