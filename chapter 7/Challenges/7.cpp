#include <iostream>
#include <fstream>
#include <climits>
using namespace std;

int main() {
    // Declare and initialize variables
    double numbers[1000];
    int count = 0;
    double total = 0, average;
    double maxNumber = INT_MIN, minNumber = INT_MAX;

    // Get the file name
    string fileName;
    cout << "Enter the file name: ";    
    cin >> fileName;

    // Open the file
    ifstream inputFile(fileName);

    // Check if the file was opened successfully
    if (!inputFile) {
        cout << "Error opening the file.\n";
        return 0;
    }

    // Read data from file
    while (inputFile >> numbers[count]) {
        total += numbers[count];
        if(numbers[count] > maxNumber)
            maxNumber = numbers[count];
        if(numbers[count] < minNumber)
            minNumber = numbers[count];
        ++count;
    }

    // Close the file
    inputFile.close();

    // Calculate average
    average = total / count;

    // Display results
    cout << "The lowest number in the array: " << minNumber << endl;
    cout << "The highest number in the array: " << maxNumber << endl;
    cout << "The total of the numbers in the array: " << total << endl;
    cout << "The average of the numbers in the array: " << average << endl;

    return 0;
}
