#include <iostream>
#include <iomanip>

int main() {
    // Declare variables for the weights and the weight of a single widget
    double pallet_weight, total_weight, widget_weight = 12.5;

    // Ask the user for the weight of the pallet by itself and with the widgets stacked on it
    std::cout << "Enter the weight of the pallet by itself (in pounds): ";
    std::cin >> pallet_weight;
    
    std::cout << "Enter the total weight of the pallet with the widgets stacked on it (in pounds): ";
    std::cin >> total_weight;

    // Calculate the number of widgets stacked on the pallet
    int widgets = (total_weight - pallet_weight) / widget_weight;

    // Display the result
    std::cout << "The number of widgets stacked on the pallet is " << widgets << "\n";

    return 0;
}
