#include <iostream>
#include <cmath>
#include <string>

using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;

    // Traverse the binary string from the last character to the first
    for (int i = binary.length() - 1; i >= 0; i--) {
        // Convert character to integer (0 or 1)
        int bit = binary[i] - '0';

        // Add to the decimal result using the power of 2
        decimal += bit * pow(2, power);

        // Increment power for the next position
        power++;
    }
    return decimal;
}

int main() {
    string binary;

    // Input binary number as a string
    cout << "Enter a binary number: ";
    cin >> binary;

    // Call the conversion function
    int decimal = binaryToDecimal(binary);

    // Output the result
    cout << "Decimal equivalent: " << decimal << endl;

    return 0;
}
