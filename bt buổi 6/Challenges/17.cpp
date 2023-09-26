#include <iostream>
using namespace std;

int main() {
    const int NUM_STORES = 5;

    for (int i = 1; i <= NUM_STORES; i++) {
        int sales;
        cout << "Enter today's sales for store " << i << ": ";
        cin >> sales;

        int numAsterisks = sales / 100;
        cout << "Store " << i << ": ";

        for (int j = 0; j < numAsterisks; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
