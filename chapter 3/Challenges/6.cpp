#include <iostream>
#include <iomanip>
#include <string>

int main() {
    // Define the amount of each ingredient needed for 48 cookies
    double sugar = 1.5;
    double butter = 1;
    double flour = 2.75;

    // Ask the user how many cookies they want to make
    int cookies;
    std::cout << "How many cookies do you want to make? ";
    std::cin >> cookies;

    // Calculate the amount of each ingredient needed for the specified number of cookies
    sugar *= (static_cast<double>(cookies) / 48);
    butter *= (static_cast<double>(cookies) / 48);
    flour *= (static_cast<double>(cookies) / 48);

    // Display the result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "To make " << cookies << " cookies, you will need:\n";
    std::cout << sugar << " cups of sugar\n";
    std::cout << butter << " cups of butter\n";
    std::cout << flour << " cups of flour\n";

    return 0;
}
