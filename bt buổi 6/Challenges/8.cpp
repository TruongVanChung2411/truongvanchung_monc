#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int choice, num1, num2, answer;

    // Use the time function to get a "seed" value for srand
    srand(time(0)); 

    do {
        // Display the menu and get the user's choice
        cout << "\nMath Tutor Menu\n";
        cout << "1. Addition problem\n";
        cout << "2. Subtraction problem\n";
        cout << "3. Multiplication problem\n";
        cout << "4. Division problem\n";
        cout << "5. Quit the program\n";
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        if (choice < 1 || choice > 5) {
            cout << "Invalid input! Please enter a number between 1 and 5.\n";
            continue;
        }

        if (choice == 5) {
            cout << "Goodbye!\n";
            break;
        }

        // Generate two random numbers
        num1 = 1 + rand() % 50;
        num2 = 1 + rand() % 50;

        // Display the problem and get the user's answer
        cout << "How much is " << num1;
        switch (choice) {
            case 1:
                cout << " + " << num2 << "? ";
                answer = num1 + num2;
                break;
            case 2:
                cout << " - " << num2 << "? ";
                answer = num1 - num2;
                break;
            case 3:
                cout << " * " << num2 << "? ";
                answer = num1 * num2;
                break;
            case 4:
                cout << " / " << num2 << "? ";
                answer = num1 / num2;
                break;
        }
        int userAnswer;
        cin >> userAnswer;

        // Check the user's answer
        if (userAnswer == answer)
            cout << "Congratulations! That's the right answer.\n";
        else
            cout << "Sorry, the correct answer is " << answer << ".\n";

    } while (choice != 5);

    return 0;
}
