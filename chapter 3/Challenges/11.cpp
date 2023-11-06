#include <iostream>
#include <iomanip>

int main() {
    // Declare variables for the monthly costs
    double loan_payment, insurance, gas, oil, tires, maintenance;

    // Ask the user to enter the monthly costs
    std::cout << "Enter the monthly cost for loan payment: ";
    std::cin >> loan_payment;
    
    std::cout << "Enter the monthly cost for insurance: ";
    std::cin >> insurance;
    
    std::cout << "Enter the monthly cost for gas: ";
    std::cin >> gas;
    
    std::cout << "Enter the monthly cost for oil: ";
    std::cin >> oil;
    
    std::cout << "Enter the monthly cost for tires: ";
    std::cin >> tires;
    
    std::cout << "Enter the monthly cost for maintenance: ";
    std::cin >> maintenance;

    // Calculate the total monthly and annual costs
    double total_monthly = loan_payment + insurance + gas + oil + tires + maintenance;
    double total_annual = total_monthly * 12;

    // Display the result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The total monthly cost is $" << total_monthly << "\n";
    std::cout << "The total annual cost is $" << total_annual << "\n";

    return 0;
}
