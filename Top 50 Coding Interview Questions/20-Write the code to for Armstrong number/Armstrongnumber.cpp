// Armstrong number is any number following the given rule
// abcd... = a^n + b^n + c^n + d^n + ...
// Where n is the order(length/digits in number)

// Example = 153 (order/length = 3)
// 153 = 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153

// Example = 1634 (order/length = 4)
// 1634 = 1^4 + 6^4 + 3^4 + 4^4 = 1 + 1296 + 81 + 256 = 1634

// number of digits in a number is order
#include <iostream>
#include <cmath> // For the pow() function
using namespace std;

// Function to check if a number is an Armstrong number
bool isArmstrong(int num) {
    int originalNum = num; // Store the original number
    int sum = 0;           // Initialize the sum of powers
    int digits = 0;        // Count the number of digits

    // Calculate the number of digits
    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    // Calculate the sum of each digit raised to the power of the number of digits
    temp = num;
    while (temp != 0) {
        int digit = temp % 10;             // Extract the last digit
        sum += pow(digit, digits);         // Add the power of the digit to the sum
        temp /= 10;                        // Remove the last digit
    }

    // Check if the sum is equal to the original number
    return sum == originalNum;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Check if the number is an Armstrong number and display the result
    if (isArmstrong(num)) {
        cout << num << " is an Armstrong number." << endl;
    } else {
        cout << num << " is not an Armstrong number." << endl;
    }

    return 0;
}
