#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main() {
    // Use the time function to get a "seed" value for srand
    unsigned seed = time(0);
    srand(seed);

    // Generate two random numbers
    int num1 = rand() % 1000;  // number between 0 and 999
    int num2 = rand() % 1000;  // number between 0 and 999

    // Display the problem
    std::cout << "  " << num1 << "\n";
    std::cout << "+ " << num2 << "\n";
    std::cout << "-----\n";

    // Pause
    std::cout << "\nPress Enter to show the answer...";
    std::cin.get();  // Wait for the user to press Enter

    // Display the answer
    std::cout << "  " << num1 << "\n";
    std::cout << "+ " << num2 << "\n";
    std::cout << "-----\n";
    std::cout << "  " << (num1 + num2) << "\n";

    return 0;
}
