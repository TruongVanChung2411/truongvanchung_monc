#include <iostream>
using namespace std;

int main()
{
    // Declare and initialize variables
    int totalCustomers = 16500;
    double energyDrinkersPercentage = 0.15;
    double citrusPreferencePercentage = 0.58;

    // Calculate number of customers
    int energyDrinkers = totalCustomers * energyDrinkersPercentage;
    int citrusPreferrers = energyDrinkers * citrusPreferencePercentage;

    // Print result
    cout << "The approximate number of customers who purchase one or more energy drinks per week: " << energyDrinkers << endl;
    cout << "The approximate number of customers who prefer citrus-flavored energy drinks: " << citrusPreferrers << endl;

    return 0;
}
