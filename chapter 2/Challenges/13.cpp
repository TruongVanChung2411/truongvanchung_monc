#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare and initialize variables
    double cost = 14.95;
    double profitRate = 0.35;

    // Calculate selling price
    double sellingPrice = cost + (cost * profitRate);

    // Print result
    cout << fixed << setprecision(2);
    cout << "The selling price of the circuit board is $" << sellingPrice << "." << endl;

    return 0;
}
