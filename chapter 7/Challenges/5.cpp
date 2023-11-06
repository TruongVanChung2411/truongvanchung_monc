#include <iostream>
#include <climits>
using namespace std;

int main() {
    double food[3][5];
    double total = 0, average;
    double maxFood = INT_MIN, minFood = INT_MAX;

    // Get input
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 5; ++j) {
            do {
                cout << "Enter the amount of food eaten by monkey " << i+1 
                << " on day " << j+1 << ": ";
                cin >> food[i][j];
                if (food[i][j] < 0)
                    cout << "Invalid input. Please enter a non-negative number.\n";
            } while (food[i][j] < 0);
            total += food[i][j];
            if(food[i][j] > maxFood)
                maxFood = food[i][j];
            if(food[i][j] < minFood)
                minFood = food[i][j];
        }
    }

    // Calculate average
    average = total / 15;

    // Display results
    cout << "Average amount of food eaten per day by the whole family of monkeys: " 
    << average << endl;
    cout << "The least amount of food eaten during the week by any one monkey: " 
    << minFood << endl;
    cout << "The greatest amount of food eaten during the week by any one monkey: " 
    << maxFood << endl;

    return 0;
}
