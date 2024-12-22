#include <iostream>
using namespace std;

// Function to calculate GCD using the Euclidean algorithm
int findGCD(int a, int b) {
    // Ensure the inputs are non-negative
    if (a < 0) a = -a;
    if (b < 0) b = -b;

    // Loop until one of the numbers becomes zero
    while (b != 0) {
        int remainder = a % b; // Find the remainder of a divided by b
        a = b;                 // Assign b to a
        b = remainder;         // Assign remainder to b
    }
    return a; // GCD is the last non-zero value of a
}

int main() {
    int num1, num2;

    // Input two integers from the user
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    // Calculate and display the GCD
    cout << "GCD of " << num1 << " and " << num2 << " is " << findGCD(num1, num2) << endl;

    return 0;
}
