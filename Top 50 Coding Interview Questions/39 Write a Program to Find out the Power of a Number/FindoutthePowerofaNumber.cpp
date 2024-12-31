#include <iostream> // Library for input and output operations
#include <cmath>    // Library for mathematical functions, including pow()
using namespace std;

int main() {
    // Variables to store user input
    double baseNumber, exponent;

    // Prompt user to enter the base number
    cout << "Enter the base number: ";
    cin >> baseNumber;

    // Prompt user to enter the exponent
    cout << "Enter the exponent: ";
    cin >> exponent;

    // Calculate the power using pow() function
    double result = pow(baseNumber, exponent);

    // Display the result
    cout << baseNumber << " ^ " << exponent << " = " << result << endl;

    return 0;
}

/*
Key Notes:
1. pow(base, exponent): Computes base raised to the power of the exponent.
2. Accepts user input for both base and exponent.
3. Handles cases like:
   - Positive/negative base or exponent.
   - Integer/decimal values for both base and exponent.
4. Time Complexity: O(1) (pow() function computes in constant time for valid inputs).
5. Space Complexity: O(1) (no additional memory allocation beyond declared variables).
*/
