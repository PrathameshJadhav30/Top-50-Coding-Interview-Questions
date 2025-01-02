#include <iostream>  // For input/output operations
#include <cmath>     // For mathematical functions like sqrt
using namespace std;

/* Function to find and print the roots of a quadratic equation */
void findRoots(int a, int b, int c) {
    // Check if 'a' is zero (not a valid quadratic equation)
    if (a == 0) {
        cout << "Invalid input: 'a' should not be zero for a quadratic equation." << endl;
        return;
    }

    // Calculate the discriminant (b^2 - 4ac)
    int discriminant = b * b - 4 * a * c;
    double sqrt_val = sqrt(abs(discriminant)); // Compute square root of |discriminant|

    // Check the nature of the roots
    if (discriminant > 0) {
        // Real and different roots
        cout << "Roots are real and different:" << endl;
        cout << "Root 1: " << (-b + sqrt_val) / (2 * a) << endl;
        cout << "Root 2: " << (-b - sqrt_val) / (2 * a) << endl;
    } else if (discriminant == 0) {
        // Real and same roots
        cout << "Roots are real and the same:" << endl;
        cout << "Root: " << -(double)b / (2 * a) << endl;
    } else {
        // Complex roots
        cout << "Roots are complex:" << endl;
        cout << "Root 1: " << -(double)b / (2 * a) << " + i" << sqrt_val / (2 * a) << endl;
        cout << "Root 2: " << -(double)b / (2 * a) << " - i" << sqrt_val / (2 * a) << endl;
    }
}

// Main function to test the findRoots function
int main() {
    // Coefficients of the quadratic equation (ax^2 + bx + c = 0)
    int a = 1, b = 4, c = 4;

    // Call the function to find and print roots
    findRoots(a, b, c);

    return 0;
}
