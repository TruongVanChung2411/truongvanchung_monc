#include <iostream>
#include <iomanip>

int main() {
    // Declare variables for the test scores and the average
    double test1, test2, test3, test4, test5, average;

    // Ask the user for the five test scores
    std::cout << "Enter the first test score: ";
    std::cin >> test1;
    
    std::cout << "Enter the second test score: ";
    std::cin >> test2;
    
    std::cout << "Enter the third test score: ";
    std::cin >> test3;
    
    std::cout << "Enter the fourth test score: ";
    std::cin >> test4;
    
    std::cout << "Enter the fifth test score: ";
    std::cin >> test5;

    // Calculate the average test score
    average = (test1 + test2 + test3 + test4 + test5) / 5.0;

    // Display the result
    std::cout << std::fixed << std::setprecision(1);
    std::cout << "The average test score is " << average << "\n";

    return 0;
}
