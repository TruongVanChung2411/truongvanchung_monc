#include <iostream>
#include <iomanip>

int main() {
    // Declare variables for the actual value, tax rate, and homeowner exemption
    double actual_value, tax_rate;
    const double HOMEOWNER_EXEMPTION = 5000.0;

    // Ask the user to enter the actual value of the property and the tax rate
    std::cout << "Enter the actual value of the property: ";
    std::cin >> actual_value;
    
    std::cout << "Enter the current tax rate for each $100 of assessed value: ";
    std::cin >> tax_rate;

    // Calculate the assessed value and property tax
    double assessed_value = actual_value * 0.6 - HOMEOWNER_EXEMPTION;
    double property_tax = assessed_value * (tax_rate / 100);

    // Calculate the annual and quarterly tax
    double annual_tax = property_tax;
    double quarterly_tax = annual_tax / 4;

    // Display the result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The annual property tax a senior homeowner will be charged for this property is $" << annual_tax << "\n";
    std::cout << "The quarterly tax bill will be $" << quarterly_tax << "\n";

    return 0;
}
