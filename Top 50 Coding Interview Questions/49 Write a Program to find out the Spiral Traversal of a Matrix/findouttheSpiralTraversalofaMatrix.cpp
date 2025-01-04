#include <iostream>
using namespace std;

#define R 4 // Number of rows
#define C 4 // Number of columns

int main() {
    int a[R][C]; // Define a matrix with fixed dimensions

    // Take user input for the matrix
    cout << "Enter the elements of the " << R << "x" << C << " matrix:\n";
    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            cin >> a[i][j];
        }
    }

    // Variables to keep track of matrix boundaries
    int left = 0, right = C - 1, top = 0, bottom = R - 1;

    // Perform spiral traversal
    cout << "Spiral order of the matrix is:\n";
    while (left <= right && top <= bottom) {
        // Print the top row from the remaining rows
        for (int i = left; i <= right; ++i) {
            cout << a[top][i] << " ";
        }
        top++; // Move the top boundary down

        // Print the right column from the remaining columns
        for (int i = top; i <= bottom; ++i) {
            cout << a[i][right] << " ";
        }
        right--; // Move the right boundary left

        // Print the bottom row from the remaining rows
        if (top <= bottom) {
            for (int i = right; i >= left; --i) {
                cout << a[bottom][i] << " ";
            }
            bottom--; // Move the bottom boundary up
        }

        // Print the left column from the remaining columns
        if (left <= right) {
            for (int i = bottom; i >= top; --i) {
                cout << a[i][left] << " ";
            }
            left++; // Move the left boundary right
        }
    }

    return 0;
}
