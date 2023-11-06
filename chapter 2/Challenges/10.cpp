#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare and initialize variables
    double gallonsOfGas = 15.0;
    double milesDriven = 375.0;

    // Calculate MPG
    double mpg = milesDriven / gallonsOfGas;

    // Print result
    cout << fixed << setprecision(2);
    cout << "The car gets " << mpg << " miles per gallon." << endl;

    return 0;
}
