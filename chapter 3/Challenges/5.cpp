#include <iostream>
#include <iomanip>

int main() {
    // Declare variables for the number of males, females and the total number of students
    int males, females, total;
    double male_percentage, female_percentage;

    // Ask the user for the number of males and females
    std::cout << "Enter the number of males in the class: ";
    std::cin >> males;
    
    std::cout << "Enter the number of females in the class: ";
    std::cin >> females;

    // Calculate the total number of students
    total = males + females;

    // Calculate the percentage of males and females
    male_percentage = (static_cast<double>(males) / total) * 100;
    female_percentage = (static_cast<double>(females) / total) * 100;

    // Display the result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The percentage of males in the class is " << male_percentage << "%\n";
    std::cout << "The percentage of females in the class is " << female_percentage << "%\n";

    return 0;
}
