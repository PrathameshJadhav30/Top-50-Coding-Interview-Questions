#include <iostream>
using namespace std;

// Recursive function to calculate the nth Fibonacci number
int fibonacci(int n) {
    if (n <= 1) {
        return n; // Base cases: Fib(0) = 0, Fib(1) = 1
    }
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    // Take user input for the position in the Fibonacci sequence
    int n;
    cout << "Enter the position (n) for Fibonacci series: ";
    cin >> n;

    // Validate input
    if (n < 0) {
        cout << "Invalid input! Please enter a non-negative integer." << endl;
        return 1; // Exit with error code
    }

    // Calculate and display the nth Fibonacci number
    cout << "The " << n << "th Fibonacci number is: " << fibonacci(n) << endl;

    return 0;
}
