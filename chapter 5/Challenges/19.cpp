#include <iostream>
using namespace std;

int main() {
    double budget, expense, totalExpenses = 0;

    cout << "Enter the amount you have budgeted for this month: ";
    cin >> budget;

    while (true) {
        cout << "Enter an expense (or -1 to quit): ";
        cin >> expense;

        if (expense == -1) {
            break;
        }

        totalExpenses += expense;
    }

    double difference = budget - totalExpenses;

    if (difference >= 0) {
        cout << "You are $" << difference << " under budget.\n";
    } else {
        cout << "You are $" << -difference << " over budget.\n";
    }

    return 0;
}
