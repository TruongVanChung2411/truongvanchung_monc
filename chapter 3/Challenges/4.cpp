#include <iostream>
#include <iomanip>
#include <string>

int main() {
    // Declare variables for the names of the months and the amount of rainfall
    std::string month1, month2, month3;
    double rainfall1, rainfall2, rainfall3, average;

    // Ask the user to enter the name of each month and the amount of rain that fell each month
    std::cout << "Enter the name of the first month: ";
    std::cin >> month1;
    std::cout << "Enter the amount of rain (in inches) that fell in " << month1 << ": ";
    std::cin >> rainfall1;
    
    std::cout << "Enter the name of the second month: ";
    std::cin >> month2;
    std::cout << "Enter the amount of rain (in inches) that fell in " << month2 << ": ";
    std::cin >> rainfall2;
    
    std::cout << "Enter the name of the third month: ";
    std::cin >> month3;
    std::cout << "Enter the amount of rain (in inches) that fell in " << month3 << ": ";
    std::cin >> rainfall3;

    // Calculate the average rainfall
    average = (rainfall1 + rainfall2 + rainfall3) / 3.0;

    // Display the result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The average rainfall for " << month1 << ", " << month2 << ", and " << month3 
              << " is " << average << " inches.\n";

    return 0;
}
