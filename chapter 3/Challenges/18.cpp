#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    // Declare variables for the principal, interest rate, and number of times the interest is compounded
    double principal, rate;
    int times_compounded;

    // Ask the user to enter the principal, interest rate, and number of times the interest is compounded
    std::cout << "Enter the principal: ";
    std::cin >> principal;
    
    std::cout << "Enter the interest rate (as a percentage): ";
    std::cin >> rate;
    
    std::cout << "Enter the number of times the interest is compounded: ";
    std::cin >> times_compounded;

    // Convert the interest rate to a decimal
    rate = rate / 100;

    // Calculate the amount in savings
    double amount = principal * pow(1 + rate / times_compounded, times_compounded);

    // Calculate the interest earned
    double interest = amount - principal;

    // Display the report
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Interest Rate: " << rate * 100 << "%\n";
    std::cout << "Times Compounded: " << times_compounded << "\n";
    std::cout << "Principal: $ " << principal << "\n";
    std::cout << "Interest: $ " << interest << "\n";
    std::cout << "Amount in Savings: $ " << amount << "\n";

    return 0;
}
