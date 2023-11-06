// This program prompts the user to input the numerator
// and denominator of a fraction. It then computes the decimal
// value of the fraction and displays the result on the screen.
#include <iostream>
using namespace std;

int main()
{
    double numerator, denominator;

    cout << "This program calculates the decimal value of ";
    cout << "a fraction.\n";
    cout << "Please enter the numerator: ";
    cin >> numerator;
    cout << "Please enter the denominator: ";
    cin >> denominator;
    cout << "The decimal value is ";
    cout << (numerator / denominator) << endl;
    return 0;
}
