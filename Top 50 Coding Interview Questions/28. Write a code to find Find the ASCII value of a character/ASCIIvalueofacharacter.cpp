#include<iostream> // Include the iostream library for input and output operations
using namespace std; // Use the standard namespace to avoid prefixing std::

int main() {
    char val; // Declare a variable to store the character input by the user

    // Prompt the user to enter a character
    cout << "Enter a character: ";
    cin >> val; // Read the character input from the user

    // Printing the ASCII value of the input character
    // Typecasting the character 'val' to an integer to get its ASCII value
    cout << "The ASCII value of '" << val << "' is " << (int)val;

    return 0; // Return 0 to indicate successful execution
}
