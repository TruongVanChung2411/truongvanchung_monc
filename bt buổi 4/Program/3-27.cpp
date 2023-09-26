// This program asks for three numbers, then
// calculates and displays the average of the numbers.
#include <iostream>
using namespace std;

int main()
{
    double num1, num2, num3, avg;

    cout << "Please enter the first number: ";
    cin >> num1;
    cout << "Please enter the second number: ";
    cin >> num2;
    cout << "Please enter the third number: ";
    cin >> num3;

    avg = (num1 + num2 + num3) / 3;
    cout << "The average is " << avg << endl;

    return 0;
}
