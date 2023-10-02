#include <iostream>
using namespace std;

// Function to display numbers greater than n
void displayNumbersGreaterThanN(int array[], int size, int n) {
    cout << "Numbers greater than " << n << " are: ";
    for(int i = 0; i < size; ++i) {
        if(array[i] > n)
            cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);
    int n = 5;

    displayNumbersGreaterThanN(array, size, n);

    return 0;
}
