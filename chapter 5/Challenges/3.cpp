#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double risePerYear = 1.5;
    int years = 25;

    // Display the table header
    cout << "Year" << setw(20) << "Millimeters Risen" << endl;
    cout << "---------------------------------" << endl;

    // Display the number of millimeters that the ocean will have risen each year
    for (int i = 1; i <= years; i++) {
        cout << setw(4) << i << setw(20) << i * risePerYear << endl;
    }

    return 0;
}
