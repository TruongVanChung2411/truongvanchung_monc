#include<iostream>
using namespace std;

int main() {
    // Declare variables
    double totalSales = 8.6e6;
    double eastCoastSalesPercentage = 0.58;

    // Calculate East Coast sales
    double eastCoastSales = totalSales * eastCoastSalesPercentage;

    // Print result
    cout << "The East Coast division will generate $" << eastCoastSales << " in sales this year." << endl;

    return 0;
}
