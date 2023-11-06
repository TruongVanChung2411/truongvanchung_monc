#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare and initialize variables
    double payAmount = 2200.0;
    int payPeriods = 26;

    // Calculate annual pay
    double annualPay = payAmount * payPeriods;

    // Print result
    cout << fixed << setprecision(2);
    cout << "The total annual pay is: $" << annualPay << endl;

    return 0;
}
