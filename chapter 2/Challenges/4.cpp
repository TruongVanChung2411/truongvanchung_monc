#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    // Declare variables
    double mealCharge = 88.67;
    double taxRate = 0.0675;
    double tipRate = 0.20;

    // Calculate tax and tip
    double tax = mealCharge * taxRate;
    double subtotal = mealCharge + tax;
    double tip = subtotal * tipRate;

    // Calculate total bill
    double totalBill = subtotal + tip;

    // Print result
    cout << fixed << setprecision(2);
    cout << "Meal cost: $" << mealCharge << endl;
    cout << "Tax amount: $" << tax << endl;
    cout << "Tip amount: $" << tip << endl;
    cout << "Total bill: $" << totalBill << endl;

    return 0;
}
