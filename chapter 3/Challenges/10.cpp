#include <iostream>
#include <iomanip>

int main() {
    // Declare variables for the replacement cost and the insurance amount
    double replacement_cost, insurance;

    // Ask the user to enter the replacement cost of the building
    std::cout << "Enter the replacement cost of the building: ";
    std::cin >> replacement_cost;

    // Calculate the minimum amount of insurance
    insurance = replacement_cost * 0.8;

    // Display the result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The minimum amount of insurance you should buy for the property is $" << insurance << "\n";

    return 0;
}
