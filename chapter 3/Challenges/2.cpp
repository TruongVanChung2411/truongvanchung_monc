#include <iostream>
#include <iomanip>

int main() {
    // Define the cost of each class of seats
    double class_a_cost = 15.0;
    double class_b_cost = 12.0;
    double class_c_cost = 9.0;

    // Declare variables for the number of tickets sold for each class
    int class_a_tickets, class_b_tickets, class_c_tickets;

    // Ask the user how many tickets for each class of seats were sold
    std::cout << "Enter the number of Class A tickets sold: ";
    std::cin >> class_a_tickets;
    
    std::cout << "Enter the number of Class B tickets sold: ";
    std::cin >> class_b_tickets;
    
    std::cout << "Enter the number of Class C tickets sold: ";
    std::cin >> class_c_tickets;

    // Calculate the income generated from ticket sales
    double income = (class_a_tickets * class_a_cost) + (class_b_tickets * class_b_cost) + (class_c_tickets * class_c_cost);

    // Display the result
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The income generated from ticket sales is $" << income << "\n";

    return 0;
}
