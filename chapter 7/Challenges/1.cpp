#include <iostream>
using namespace std;

int main() {
    int array[10];
    cout << "Enter 10 integers: ";

    // Get input
    for(int i = 0; i < 10; ++i)
        cin >> array[i];

    // Assume first element as largest and smallest
    int max = array[0];
    int min = array[0];

    // Loop through the array
    for(int i = 1; i < 10; ++i) {
        // Compare elements of array with max and min
        if(array[i] > max)
            max = array[i];
        if(array[i] < min)
            min = array[i];
    }

    cout << "Largest element: " << max << endl;
    cout << "Smallest element: " << min << endl;

    return 0;
}
