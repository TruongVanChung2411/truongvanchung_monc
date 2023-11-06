#include <iostream>
#include <iomanip>
#include <string>

int main() {
    // Declare variables for the movie name, number of tickets sold, and prices
    std::string movie_name;
    int adult_tickets, child_tickets;
    double adult_price = 10.0, child_price = 6.0;

    // Ask the user for the movie name and number of tickets sold
    std::cout << "Enter the name of the movie: ";
    std::getline(std::cin, movie_name);
    
    std::cout << "Enter the number of adult tickets sold: ";
    std::cin >> adult_tickets;
    
    std::cout << "Enter the number of child tickets sold: ";
    std::cin >> child_tickets;

    // Calculate the gross and net box office profit and the amount paid to the distributor
    double gross_profit = (adult_tickets * adult_price) + (child_tickets * child_price);
    double net_profit = gross_profit * 0.2;
    double distributor_payment = gross_profit - net_profit;

    // Display the report
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Movie Name: \"" << movie_name << "\"\n";
    std::cout << "Adult Tickets Sold: " << adult_tickets << "\n";
    std::cout << "Child Tickets Sold: " << child_tickets << "\n";
    std::cout << "Gross Box Office Profit: $ " << gross_profit << "\n";
    std::cout << "Net Box Office Profit: $ " << net_profit << "\n";
    std::cout << "Amount Paid to Distributor: $ " << distributor_payment << "\n";

    return 0;
}
