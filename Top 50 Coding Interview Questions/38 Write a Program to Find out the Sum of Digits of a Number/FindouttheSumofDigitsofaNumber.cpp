#include <iostream> // Include library for input/output operations
using namespace std;

int main() {
    int num, sum = 0; // Declare variables: num to store input, sum to store result

    // Prompt user for input
    cout << "Enter any number: ";
    cin >> num;

    // Loop to calculate the sum of digits
    while (num != 0) {
        sum += num % 10;  // Add the last digit of num to sum
        num /= 10;        // Remove the last digit from num
    }

    // Output the result
    cout << "\nSum of digits: " << sum << endl;

    return 0;
}

/*
Time Complexity: O(N) 
- Where N is the number of digits in the input number.
- The loop iterates once for each digit.

Space Complexity: O(1)
- Only a constant amount of extra memory is used (variables num and sum).
*/
