#include <iostream>
#include <iomanip>

int main() {
    // Declare variables for the actual value, assessment value, and property tax
    double actual_value, assessment_value, property_tax;

    // Ask the user to enter the actual value of the property
    std::cout << "Enter the actual value of the property: ";
    std::cin >> actual_value;

    // Calculate the assessment value and property tax
    assessment_value = actual_value * 0.6;
    property_tax = assessment_value * 0.0075;

    // Display the result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The assessment value of the property is $" << assessment_value << "\n";
    std::cout << "The property tax is $" << property_tax << "\n";

    return 0;
}
