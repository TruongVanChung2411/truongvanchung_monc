#include <iostream>
using namespace std;

int main()
{
    // Declare variables
    double purchaseAmount = 95.0;
    double stateTaxRate = 0.04;
    double countyTaxRate = 0.02;

    // Calculate taxes
    double stateTax = purchaseAmount * stateTaxRate;
    double countyTax = purchaseAmount * countyTaxRate;
    double totalTax = stateTax + countyTax;

    // Print result
    cout << "The total sales tax on a $" << purchaseAmount << " purchase is $" << totalTax << "." << endl;

    return 0;
}
