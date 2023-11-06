#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream inputFile("LineUp.txt");  // Open the file

    // Check if the file was opened successfully
    if (!inputFile) {
        cout << "Error opening the file.\n";
        return 1;
    }

    string name;  // To hold a name read from the file

    // Read the first name from the file
    if (!(inputFile >> name)) {
        cout << "The file is empty.\n";
        return 1;
    }

    string firstInLine = name;  // The first student in line
    string lastInLine = name;  // The last student in line

    // Read the rest of the names from the file
    while (inputFile >> name) {
        if (name < firstInLine) {
            firstInLine = name;
        }
        if (name > lastInLine) {
            lastInLine = name;
        }
    }

    inputFile.close();  // Close the file

    // Display the first and last student in line
    cout << "The first student in line is: " << firstInLine << '\n';
    cout << "The last student in line is: " << lastInLine << '\n';

    return 0;
}
