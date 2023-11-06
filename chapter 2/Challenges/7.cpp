#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare and initialize variables
    double riseRate = 1.5;

    // Calculate ocean levels
    double levelIn5Years = 5 * riseRate;
    double levelIn7Years = 7 * riseRate;
    double levelIn10Years = 10 * riseRate;

    // Print result
    cout << fixed << setprecision(2);
    cout << "The ocean's level will be " << levelIn5Years << " millimeters higher than the current level in 5 years." << endl;
    cout << "The ocean's level will be " << levelIn7Years << " millimeters higher than the current level in 7 years." << endl;
    cout << "The ocean's level will be " << levelIn10Years << " millimeters higher than the current level in 10 years." << endl;

    return 0;
}
