#include <iostream> 
#include <iomanip> 

int main() {
    // Print the table header
    std::cout << "Celsius\tFahrenheit" << std::endl;

    // Loop from 0 to 20
    for (int celsius = 0; celsius <= 20; ++celsius) {
        // Convert the temperature from Celsius to Fahrenheit
        double fahrenheit = 9.0 / 5.0 * celsius + 32;
        // Print the Celsius temperature and its Fahrenheit equivalent
        std::cout << celsius << "\t" << std::fixed << std::setprecision(2) 
        << fahrenheit << std::endl;
    }
    return 0;
}
