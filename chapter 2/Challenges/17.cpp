#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare and initialize variables
    int shares = 750;
    double pricePerShare = 35.0;
    double commissionRate = 0.02;

    // Calculate amounts
    double stockCost = shares * pricePerShare;
    double commission = stockCost * commissionRate;
    double totalCost = stockCost + commission;

    // Print result
    cout << fixed << setprecision(2);
    cout << "The amount paid for the stock alone: $" << stockCost << endl;
    cout << "The amount of the commission: $" << commission << endl;
    cout << "The total amount paid: $" << totalCost << endl;

    return 0;
}
