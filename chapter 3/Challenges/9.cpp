#include <iostream>
#include <iomanip>

int main() {
    // Declare variables for the number of cookies eaten and the calories per cookie
    int cookies;
    double calories_per_cookie = 300.0 / 10;

    // Ask the user how many cookies they ate
    std::cout << "How many cookies did you eat? ";
    std::cin >> cookies;

    // Calculate the total calories consumed
    double total_calories = cookies * calories_per_cookie;

    // Display the result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "You consumed " << total_calories << " calories.\n";

    return 0;
}
