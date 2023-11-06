#include <iostream>
#include <iomanip>

int main() {
    // Declare variables for the number of shares, purchase price, sale price, and commission rate
    int shares = 1000;
    double purchase_price = 45.50;
    double sale_price = 56.90;
    double commission_rate = 0.02;

    // Calculate the amounts paid and received, and the commissions
    double paid = shares * purchase_price;
    double received = shares * sale_price;
    double commission_paid = paid * commission_rate;
    double commission_received = received * commission_rate;

    // Calculate the profit
    double profit = received - paid - commission_paid - commission_received;

    // Display the results
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "The amount of money Joe paid for the stock: $" << paid << "\n";
    std::cout << "The amount of commission Joe paid his broker when he bought the stock: $" << commission_paid << "\n";
    std::cout << "The amount that Joe sold the stock for: $" << received << "\n";
    std::cout << "The amount of commission Joe paid his broker when he sold the stock: $" << commission_received << "\n";
    std::cout << "The amount of profit that Joe made after selling his stock and paying the two commissions to his broker: $" << profit << "\n";

    return 0;
}
