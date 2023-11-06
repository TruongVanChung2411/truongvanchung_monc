#include <iostream>
#include <iomanip>

int main() {
    // Declare constants for the conversion factors
    const double YEN_PER_DOLLAR = 98.93;
    const double EUROS_PER_DOLLAR = 0.74;

    // Declare variable for the amount in dollars
    double dollars;

    // Ask the user to enter the amount in dollars
    std::cout << "Enter the amount in US dollars: ";
    std::cin >> dollars;

    // Convert the amount to yen and euros
    double yen = dollars * YEN_PER_DOLLAR;
    double euros = dollars * EUROS_PER_DOLLAR;

    // Display the result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The amount in Japanese yen is ¥" << yen << "\n";
    std::cout << "The amount in euros is €" << euros << "\n";

    return 0;
}
