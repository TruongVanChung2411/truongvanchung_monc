#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("Random.txt");  // Open the file

    // Check if the file was opened successfully
    if (!inputFile) {
        cout << "Error opening the file.\n";
        return 1;
    }

    int count = 0;  // The number of numbers in the file
    int sum = 0;  // The sum of the numbers in the file
    int number;  // To hold a number read from the file

    // Read all the numbers from the file
    while (inputFile >> number) {
        count++;
        sum += number;
    }

    inputFile.close();  // Close the file

    // Calculate the average of the numbers
    double average = static_cast<double>(sum) / count;

    // Display the results
    cout << "The number of numbers in the file: " << count << '\n';
    cout << "The sum of the numbers in the file: " << sum << '\n';
    cout << "The average of the numbers in the file: " << average << '\n';

    return 0;
}
