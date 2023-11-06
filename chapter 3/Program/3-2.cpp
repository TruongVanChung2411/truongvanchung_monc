// This program prompts the user to input the length and width of
// a rectangle. It then computes the area of the rectangle and displays
// the result on the screen.
#include <iostream>
using namespace std;

int main()
{
    int length, width, area;

    cout << "This program computes the area of a ";
    cout << "rectangle.\n";
    cout << "Please enter the length and width of the rectangle ";
    cout << "separated by a space.\n";
    cin >> length >> width;
    area = length * width;
    cout << "The area of the rectangle is " << area << endl;
    return 0;
}
