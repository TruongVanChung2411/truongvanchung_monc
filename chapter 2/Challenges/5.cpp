#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // Declare and initialize variables
    double num1 = 28;
    double num2 = 32;
    double num3 = 37;
    double num4 = 24;
    double num5 = 33;

    // Calculate sum
    double sum = num1 + num2 + num3 + num4 + num5;

    // Calculate average
    double average = sum / 5;

    // Print result
    cout << fixed << setprecision(2);
    cout << "The average of the values is: " << average << endl;

    return 0;
}
