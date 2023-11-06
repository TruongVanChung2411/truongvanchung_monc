#include <iostream>
#include <cmath>

int main() {
    // Declare variables for the diameter, radius, and number of slices
    double diameter, radius, slices;

    // Ask the user for the diameter of the pizza
    std::cout << "Enter the diameter of the pizza in inches: ";
    std::cin >> diameter;

    // Calculate the radius and number of slices
    radius = diameter / 2;
    double area = M_PI * pow(radius, 2);
    slices = area / 14.125;

    // Display the number of slices
    std::cout << "The pizza can be divided into " << slices << " slices.\n";

    return 0;
}
