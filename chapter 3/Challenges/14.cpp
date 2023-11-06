#include <iostream>
#include <iomanip>
#include <string>

int main() {
    // Declare variables for the month, year, total collected, and tax rates
    std::string month;
    int year;
    double total_collected;
    const double STATE_TAX_RATE = 0.04;
    const double COUNTY_TAX_RATE = 0.02;

    // Ask the user to enter the month, year, and total amount collected
    std::cout << "Enter the month: ";
    std::cin >> month;
    
    std::cout << "Enter the year: ";
    std::cin >> year;
    
    std::cout << "Enter the total amount collected: ";
    std::cin >> total_collected;

    // Calculate the sales and taxes
    double sales = total_collected / 1.06;
    double county_tax = sales * COUNTY_TAX_RATE;
    double state_tax = sales * STATE_TAX_RATE;
    double total_tax = county_tax + state_tax;

    // Display the report
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Month: " << month << "\n";
    std::cout << "--------------------\n";
    std::cout << "Total Collected: $ " << total_collected << "\n";
    std::cout << "Sales: $ " << sales << "\n";
    std::cout << "County Sales Tax: $ " << county_tax << "\n";
    std::cout << "State Sales Tax: $ " << state_tax << "\n";
    std::cout << "Total Sales Tax: $ " << total_tax << "\n";

    return 0;
}
