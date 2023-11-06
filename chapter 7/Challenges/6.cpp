#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Declare and initialize variables
    char weather[3][30];
    int rainyDays[3] = {0}, cloudyDays[3] = {0}, sunnyDays[3] = {0};
    int totalRainy = 0, totalCloudy = 0, totalSunny = 0;
    int maxRainyMonth = 0;
    string months[3] = {"June", "July", "August"};

    // Open the file
    ifstream inputFile("RainOrShine.txt");

    // Read data from file
    for(int i = 0; i < 3; ++i) {
        for(int j = 0; j < 30; ++j) {
            inputFile >> weather[i][j];
            switch(weather[i][j]) {
                case 'R':
                    ++rainyDays[i];
                    ++totalRainy;
                    break;
                case 'C':
                    ++cloudyDays[i];
                    ++totalCloudy;
                    break;
                case 'S':
                    ++sunnyDays[i];
                    ++totalSunny;
                    break;
            }
        }
        if(rainyDays[i] > rainyDays[maxRainyMonth])
            maxRainyMonth = i;
    }

    // Close the file
    inputFile.close();

    // Display results
    for(int i = 0; i < 3; ++i) {
        cout << months[i] << ":\n";
        cout << "Rainy days: " << rainyDays[i] << endl;
        cout << "Cloudy days: " << cloudyDays[i] << endl;
        cout << "Sunny days: " << sunnyDays[i] << "\n\n";
    }
    cout << "Total:\n";
    cout << "Rainy days: " << totalRainy << endl;
    cout << "Cloudy days: " << totalCloudy << endl;
    cout << "Sunny days: " << totalSunny << "\n\n";
    cout << "The month with the most rainy days: " << months[maxRainyMonth] << endl;

    return 0;
}
