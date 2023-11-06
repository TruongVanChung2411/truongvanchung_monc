#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int days;
    double salary = 0.01; // Start with one penny

    // Ask the user for the number of days
    cout << "Enter the number of days: ";
    cin >> days;

    // Input validation
    while (days < 1) {
        cout << "Invalid input. Please enter a number greater than 0: ";
        cin >> days;
    }

    // Display the salary for each day
    cout << "Day" << "\tSalary" << endl;
    cout << "------------------------" << endl;
    for (int i = 1; i <= days; i++) {
        cout << i << "\t$" << setprecision(2) << fixed << salary << endl;
        salary *= 2; // Double the salary each day
    }

    return 0;
}
