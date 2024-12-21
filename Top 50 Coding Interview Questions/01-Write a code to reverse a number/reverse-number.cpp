#include <iostream>
using namespace std;

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0; // Variable to store the reversed number

    // Loop to extract digits and build the reversed number
    while (num != 0) {
        int digit = num % 10;    // Extract the last digit
        reversed = reversed * 10 + digit; // Add the digit to the reversed number
        num /= 10;               // Remove the last digit
    }

    return reversed; // Return the reversed number
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    // Call the function and display the reversed number
    cout << "The reversed number is: " << reverseNumber(num) << endl;

    return 0;
}
