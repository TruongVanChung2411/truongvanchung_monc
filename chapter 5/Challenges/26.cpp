#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

int main() {
    double initialBalance, deposit, annualInterestRate;
    int months;

    // Get the initial balance, monthly deposit, annual interest rate, and number of months
    cout << "Enter the initial balance: ";
    cin >> initialBalance;
    cout << "Enter the monthly deposit: ";
    cin >> deposit;
    cout << "Enter the annual interest rate (as a decimal): ";
    cin >> annualInterestRate;
    cout << "Enter the number of months: ";
    cin >> months;

    // Open the report file
    ofstream reportFile("Report.txt");

    // Check if the file was opened successfully
    if (!reportFile) {
        cout << "Error opening the file.\n";
        return 1;
    }

    // Write the report header to the file
    reportFile << "Month\tBalance\tInterest\n";

    // Calculate the account balance for each month and write it to the file
    for (int month = 1; month <= months; month++) {
        double interest = (initialBalance + deposit) * annualInterestRate / 12;
        initialBalance += deposit + interest;

        reportFile << month << '\t'
                   << fixed << setprecision(2) << initialBalance << '\t'
                   << fixed << setprecision(2) << interest << '\n';
    }

    reportFile.close();  // Close the file

    cout << "The final report has been written to Report.txt.\n";

    return 0;
}
