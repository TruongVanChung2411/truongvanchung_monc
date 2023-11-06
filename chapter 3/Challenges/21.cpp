#include <iostream>
#include <cmath>

// Function to calculate the area of the pizza
double Area(double radius) {
    return M_PI * pow(radius, 2);
}

int main() {
    double diameter, radius, area;
    int numPeople, slicesPerPizza, totalSlices, numPizzas;

    // Number of slices per pizza
    slicesPerPizza = 8;

    // Get the number of people
    std::cout << "Enter the number of people: ";
    std::cin >> numPeople;

    // Get the diameter of the pizza
    std::cout << "Enter the diameter of the pizza in inches: ";
    std::cin >> diameter;

    // Calculate the radius
    radius = diameter / 2;

    // Calculate the area
    area = Area(radius);

    // Calculate total number of slices (4 slices per person)
    totalSlices = numPeople * 4;

    // Calculate number of pizzas needed
    numPizzas = totalSlices / slicesPerPizza;

    // If there is a remainder, add one more pizza
    if (totalSlices % slicesPerPizza != 0) {
        numPizzas++;
    }

    std::cout << "You need to order " << numPizzas << " pizzas.\n";

    return 0;
}
