#include <iostream>
using namespace std;

int main() {
    double caloriesPerMinute = 3.6;

    // Display the number of calories burned after 5, 10, 15, 20, 25, and 30 minutes
    for (int minutes = 5; minutes <= 30; minutes += 5) {
        cout << "After " << minutes << " minutes, you will have burned " 
             << minutes * caloriesPerMinute << " calories." << endl;
    }

    return 0;
}
