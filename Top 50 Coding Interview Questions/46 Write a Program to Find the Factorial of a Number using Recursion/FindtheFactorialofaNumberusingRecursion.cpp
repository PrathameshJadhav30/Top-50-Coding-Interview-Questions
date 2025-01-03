#include <iostream>
using namespace std;

int main() {
    int num = 6, fact = 1;

    // Check if the number is negative
    if (num < 0) {
        cout << "Factorial of a negative number doesn't exist.\n";
    } else {
        // Calculate factorial for non-negative numbers
        for (int i = 1; i <= num; i++) {
            fact *= i; // Multiply current number with factorial
        }

        // Display the factorial
        cout << "Factorial of " << num << " is: " << fact << endl;
    }

    // Time complexity: O(N), where N is the input number
    // Space complexity: O(1), as only a constant amount of space is used

    return 0;
}
