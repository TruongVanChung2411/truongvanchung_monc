#include <iostream>
using namespace std;

int main() {
    double annualInterestRate, startingBalance, balance, totalDeposits = 0, totalWithdrawals = 0, totalInterest = 0;
    int months;

    // Ask the user for the annual interest rate, the starting balance, and the number of months
    cout << "Enter the annual interest rate: ";
    cin >> annualInterestRate;
    cout << "Enter the starting balance: ";
    cin >> startingBalance;
    cout << "Enter the number of months: ";
    cin >> months;

    balance = startingBalance;

    for (int i = 1; i <= months; i++) {
        double deposit, withdrawal, monthlyInterest;

        // Ask the user for the amount deposited into the account during the month
        cout << "Enter the amount deposited into the account during month " << i << ": ";
        cin >> deposit;
        while (deposit < 0) {
            cout << "Invalid input. Please enter a non-negative number: ";
            cin >> deposit;
        }

        // Add the deposit to the balance and the total deposits
        balance += deposit;
        totalDeposits += deposit;

        // Ask the user for the amount withdrawn from the account during the month
        cout << "Enter the amount withdrawn from the account during month " << i << ": ";
        cin >> withdrawal;
        while (withdrawal < 0) {
            cout << "Invalid input. Please enter a non-negative number: ";
            cin >> withdrawal;
        }

        // Subtract the withdrawal from the balance and add it to the total withdrawals
        balance -= withdrawal;
        totalWithdrawals += withdrawal;

        // If the balance is negative, display a message and terminate the loop
        if (balance < 0) {
            cout << "The account has been closed due to a negative balance.\n";
            break;
        }

        // Calculate the monthly interest and add it to the balance and the total interest
        monthlyInterest = (annualInterestRate / 12) * balance;
        balance += monthlyInterest;
        totalInterest += monthlyInterest;
    }

    // Display the ending balance, the total amount of deposits, the total amount of withdrawals, and the total interest earned
    cout << "Ending balance: " << balance << endl;
    cout << "Total amount of deposits: " << totalDeposits << endl;
    cout << "Total amount of withdrawals: " << totalWithdrawals << endl;
    cout << "Total interest earned: " << totalInterest << endl;

    return 0;
}
