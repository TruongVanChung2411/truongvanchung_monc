#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int numStudents;
    vector<string> names;

    // Prompt the user to enter the number of students
    cout << "Enter the number of students in the class (between 1 and 25): ";
    cin >> numStudents;

    // Input validation
    while (numStudents < 1 || numStudents > 25) {
        cout << "Invalid input. Please enter a number between 1 and 25: ";
        cin >> numStudents;
    }

    // Loop to read the names
    for (int i = 0; i < numStudents; i++) {
        string name;
        cout << "Enter the name of student " << (i + 1) << ": ";
        cin >> name;
        names.push_back(name);
    }

    // Sort the names
    sort(names.begin(), names.end());

    // Report the first and last student
    cout << "The student at the front of the line is: " << names.front() << endl;
    cout << "The student at the end of the line is: " << names.back() << endl;

    return 0;
}
