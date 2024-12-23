#include <iostream> // Include necessary library for input/output
using namespace std;

// Function to check if a number is a perfect number
bool isPerfectNumber(int num) {
    if (num <= 1) {
        // A perfect number must be greater than 1
        return false;
    }

    int sum = 0; // Initialize sum to store the sum of divisors

    // Loop to find divisors of num
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            // If i is a divisor, add it to the sum
            sum += i;
        }
    }

    // A number is perfect if the sum of its divisors equals itself
    return sum == num;
}

// Main function
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number; // Take input from the user

    if (isPerfectNumber(number)) {
        // If the number is perfect
        cout << number << " is a Perfect Number." << endl;
    } else {
        // If the number is not perfect
        cout << number << " is not a Perfect Number." << endl;
    }

    return 0; // Return 0 to indicate successful execution
}
