#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare and initialize variables
    double gasTank = 20.0;
    double avgMpgTown = 23.5;
    double avgMpgHighway = 28.9;

    // Calculate distances
    double distanceTown = gasTank * avgMpgTown;
    double distanceHighway = gasTank * avgMpgHighway;

    // Print result
    cout << fixed << setprecision(2);
    cout << "The car can travel " << distanceTown << " miles in town on one tank of gas." << endl;
    cout << "The car can travel " << distanceHighway << " miles on the highway on one tank of gas." << endl;

    return 0;
}
