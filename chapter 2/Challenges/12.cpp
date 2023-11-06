#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    // Declare and initialize variables
    double squareFeetPerAcre = 43560.0;
    double tractSize = 391876.0;

    // Calculate number of acres
    double acres = tractSize / squareFeetPerAcre;

    // Print result
    cout << fixed << setprecision(2);
    cout << "The tract of land is " << acres << " acres." << endl;

    return 0;
}
