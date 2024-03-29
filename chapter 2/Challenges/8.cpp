#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare and initialize variables
    double item1 = 15.95;
    double item2 = 24.95;
    double item3 = 6.95;
    double item4 = 12.95;
    double item5 = 3.95;
    double salesTaxRate = 0.07;

    // Calculate subtotal
    double subtotal = item1 + item2 + item3 + item4 + item5;

    // Calculate sales tax
    double salesTax = subtotal * salesTaxRate;

    // Calculate total
    double total = subtotal + salesTax;

    // Print result
    cout << fixed << setprecision(2);
    cout << "Price of item 1: $" << item1 << endl;
    cout << "Price of item 2: $" << item2 << endl;
    cout << "Price of item 3: $" << item3 << endl;
    cout << "Price of item 4: $" << item4 << endl;
    cout << "Price of item 5: $" << item5 << endl;
    cout << "Subtotal: $" << subtotal << endl;
    cout << "Sales tax: $" << salesTax << endl;
    cout << "Total: $" << total << endl;

    return 0;
}
