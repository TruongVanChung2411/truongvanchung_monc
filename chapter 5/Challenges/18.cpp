#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream inputFile("People.txt");

    if (!inputFile) {
        cout << "Error opening file." << endl;
        return 1;
    }

    cout << "PRAIRIEVILLE POPULATION GROWTH\n";
    cout << "(each * represents 1,000 people)\n";

    int year = 1900;

    while (!inputFile.eof()) {
        int population;
        inputFile >> population;

        int numAsterisks = population / 1000;

        cout << year << " ";

        for (int i = 0; i < numAsterisks; i++) {
            cout << "*";
        }

        cout << endl;

        year += 20;
    }

    inputFile.close();

    return 0;
}
