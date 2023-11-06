#include <iostream>
#include <iomanip>

int main() {
    // Declare variables for the Celsius and Fahrenheit temperatures
    double celsius, fahrenheit;

    // Ask the user to enter the Celsius temperature
    std::cout << "Enter the temperature in Celsius: ";
    std::cin >> celsius;

    // Convert the Celsius temperature to Fahrenheit
    fahrenheit = (9.0 / 5.0) * celsius + 32;

    // Display the result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The temperature in Fahrenheit is " << fahrenheit << "\n";

    return 0;
}
