#include <iostream>
using namespace std;

int main() {
    // Display Pattern A
    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= i; j++) {
            cout << '+';
        }
        cout << '\n';
    }

    cout << '\n';  // Print a newline to separate the two patterns

    // Display Pattern B
    for (int i = 10; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << '+';
        }
        cout << '\n';
    }

    return 0;
}
