// This program lets the user enter a filename.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    ifstream inputFile; // File stream object
    string filename; // Filename to read from
    int number; // Number to read from file

    // Get the filename from the user.
    cout << "Enter the filename: ";
    cin >> filename;

    // Open the file.
    inputFile.open(filename.c_str());

    // If the file successfully opened, process it.
    if (inputFile)
    {
        // Read the numbers from the file and
        // display them.
        while (inputFile >> number)
        {
            cout << number << endl;
        }

        // Close the file.
        inputFile.close();
    }
    else
    {
        // Display an error message.
        cout << "Error opening the file.\n";
    }
    return 0;
}
