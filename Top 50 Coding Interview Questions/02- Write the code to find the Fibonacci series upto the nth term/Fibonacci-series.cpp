#include <iostream>
using namespace std;

// Function to print Fibonacci series up to the nth term
void printFibonacci(int n) {
    // Initialize the first two terms of the Fibonacci series
    int t1 = 0, t2 = 1, nextTerm;

    // Edge cases: If n is less than 1, there's no series
    if (n <= 0) {
        cout << "Please enter a positive integer." << endl;
        return;
    }

    cout << "Fibonacci Series: ";

    // Print the Fibonacci series
    for (int i = 1; i <= n; ++i) {
        cout << t1 << " "; // Print the current term
        nextTerm = t1 + t2; // Calculate the next term
        t1 = t2; // Update t1 to t2
        t2 = nextTerm; // Update t2 to the new term
    }
    cout << endl;
}

int main() {
    int n;

    // Prompt user for the number of terms
    cout << "Enter the number of terms: ";
    cin >> n;

    // Call the function to print Fibonacci series
    printFibonacci(n);

    return 0;
}
