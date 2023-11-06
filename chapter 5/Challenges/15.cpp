#include <iostream>
using namespace std;

int main() {
    int employeeNumber;
    double grossPay, stateTax, federalTax, FICA, netPay;
    double totalGrossPay = 0, totalStateTax = 0, totalFederalTax = 0, totalFICA = 0, totalNetPay = 0;

    // Ask for the employee number
    cout << "Enter the employee number (enter 0 to end): ";
    cin >> employeeNumber;

    while (employeeNumber != 0) {
        // Ask for the gross pay, state tax, federal tax, and FICA withholdings
        cout << "Enter the gross pay: ";
        cin >> grossPay;
        cout << "Enter the state tax: ";
        cin >> stateTax;
        cout << "Enter the federal tax: ";
        cin >> federalTax;
        cout << "Enter the FICA withholdings: ";
        cin >> FICA;

        // Input validation
        while (grossPay < 0 || stateTax < 0 || federalTax < 0 || FICA < 0 || stateTax + federalTax + FICA > grossPay) {
            cout << "Invalid input. Please reenter the data for this employee.\n";
            cout << "Enter the gross pay: ";
            cin >> grossPay;
            cout << "Enter the state tax: ";
            cin >> stateTax;
            cout << "Enter the federal tax: ";
            cin >> federalTax;
            cout << "Enter the FICA withholdings: ";
            cin >> FICA;
        }

        // Calculate the net pay
        netPay = grossPay - stateTax - federalTax - FICA;

        // Update the totals
        totalGrossPay += grossPay;
        totalStateTax += stateTax;
        totalFederalTax += federalTax;
        totalFICA += FICA;
        totalNetPay += netPay;

        // Ask for the next employee number
        cout << "Enter the employee number (enter 0 to end): ";
        cin >> employeeNumber;
    }

    // Display the totals
    cout << "Total gross pay: " << totalGrossPay << endl;
    cout << "Total state tax: " << totalStateTax << endl;
    cout << "Total federal tax: " << totalFederalTax << endl;
    cout << "Total FICA withholdings: " << totalFICA << endl;
    cout << "Total net pay: " << totalNetPay << endl;

    return 0;
}
