#include <iostream>
#include <string>
using namespace std;

int main() {
    string salsa[5] = {"mild", "medium", "sweet", "hot", "zesty"};
    int sales[5];
    int totalSales = 0;
    int maxSales, minSales;
    string maxSalsa, minSalsa;

    // Get input
    for(int i = 0; i < 5; ++i) {
        do {
            cout << "Enter the number of jars sold for " << salsa[i] << ": ";
            cin >> sales[i];
            if (sales[i] < 0)
                cout << "Invalid input. Please enter a non-negative number.\n";
        } while (sales[i] < 0);
        totalSales += sales[i];
    }

    // Assume first element as max and min
    maxSales = sales[0];
    minSales = sales[0];
    maxSalsa = salsa[0];
    minSalsa = salsa[0];

    // Loop through the array
    for(int i = 1; i < 5; ++i) {
        // Compare elements of array with max and min
        if(sales[i] > maxSales) {
            maxSales = sales[i];
            maxSalsa = salsa[i];
        }
        if(sales[i] < minSales) {
            minSales = sales[i];
            minSalsa = salsa[i];
        }
    }

    // Display results
    cout << "Sales for each salsa type:\n";
    for(int i = 0; i < 5; ++i) {
        cout << salsa[i] << ": " << sales[i] << endl;
    }
    cout << "Total sales: " << totalSales << endl;
    cout << "Highest selling product: " << maxSalsa << " (" << maxSales << ")" << endl;
    cout << "Lowest selling product: " << minSalsa << " (" << minSales << ")" << endl;

    return 0;
}
