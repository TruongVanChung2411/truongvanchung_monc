#include <iostream>

int main() {
    // Declare variables
    float gallons, miles, mpg;

    // Ask the user to enter the number of gallons of gas the car can hold
    std::cout << "Enter the number of gallons of gas the car can hold: ";
    std::cin >> gallons;

    // Ask the user to enter the number of miles it can be driven on a full tank
    std::cout << "Enter the number of miles it can be driven on a full tank: ";
    std::cin >> miles;

    // Calculate the miles per gallon
    mpg = miles / gallons;

    // Display the result
    std::cout << "The car can drive " << mpg << " miles per gallon of gas.\n";

    return 0;
}
