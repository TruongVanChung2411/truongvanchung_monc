#include <iostream>
using namespace std;

// Function to check if a 3x3 array is a Lo Shu Magic Square
bool isLoShuMagicSquare(int square[3][3]) {
    int sum = 0;

    // Calculate the sum of the first row
    for(int i = 0; i < 3; ++i)
        sum += square[0][i];

    // Check rows
    for(int i = 1; i < 3; ++i) {
        int rowSum = 0;
        for(int j = 0; j < 3; ++j)
            rowSum += square[i][j];
        if(rowSum != sum)
            return false;
    }

    // Check columns
    for(int i = 0; i < 3; ++i) {
        int colSum = 0;
        for(int j = 0; j < 3; ++j)
            colSum += square[j][i];
        if(colSum != sum)
            return false;
    }

    // Check diagonals
    if(square[0][0] + square[1][1] + square[2][2] != sum || square[0][2] + square[1][1] + square[2][0] != sum)
        return false;

    return true;
}

int main() {
    int square[3][3] = {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}};

    if(isLoShuMagicSquare(square))
        cout << "The square is a Lo Shu Magic Square.\n";
    else
        cout << "The square is not a Lo Shu Magic Square.\n";

    return 0;
}
