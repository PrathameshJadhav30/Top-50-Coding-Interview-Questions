#include <iostream>
using namespace std;

// Function to calculate the sum of natural numbers using recursion
int sumOfNaturalNumbers(int n) {
    // Base case: If n is 0, the sum is 0
    if (n == 0) {
        return 0;
    }
    // Recursive case: Add the current number to the sum of (n-1)
    return n + sumOfNaturalNumbers(n - 1);
}

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    // Input validation
    if (n < 0) {
        cout << "Please enter a positive integer." << endl;
        return 1; // Exit the program with an error code
    }

    // Call the recursive function and display the result
    cout << "The sum of the first " << n << " natural numbers is: " << sumOfNaturalNumbers(n) << endl;
    return 0;
}
