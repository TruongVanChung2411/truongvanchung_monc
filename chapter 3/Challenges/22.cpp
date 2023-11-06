#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    // Declare variable for the angle
    double angle;

    // Ask the user to enter an angle in radians
    std::cout << "Enter an angle in radians: ";
    std::cin >> angle;

    // Calculate the sine, cosine, and tangent of the angle
    double sine = sin(angle);
    double cosine = cos(angle);
    double tangent = tan(angle);

    // Display the result
    std::cout << std::fixed << std::setprecision(4);
    std::cout << "The sine of the angle is " << sine << "\n";
    std::cout << "The cosine of the angle is " << cosine << "\n";
    std::cout << "The tangent of the angle is " << tangent << "\n";

    return 0;
}
