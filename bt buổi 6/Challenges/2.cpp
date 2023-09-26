#include <iostream>
using namespace std;

int main() {
    // Use a loop to display the characters for the ASCII codes 0 through 127
    for (int i = 0; i < 128; i++) {
        cout << static_cast<char>(i) << " ";
        
        // Display 16 characters on each line
        if (i % 16 == 15) {
            cout << endl;
        }
    }

    return 0;
}
