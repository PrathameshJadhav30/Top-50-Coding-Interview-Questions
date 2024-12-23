#include <iostream>   // Include necessary library for input/output
#include <string>     // Include string library for string manipulation
using namespace std;

// Function to find and display non-repeating characters in a string
void findNonRepeatingCharacters(const string& str) {
    const int CHAR_COUNT = 256; // Total number of possible ASCII characters
    int frequency[CHAR_COUNT] = {0}; // Array to store character frequencies, initialized to 0

    // Step 1: Count the frequency of each character using a plain for loop
    for (int i = 0; i < str.length(); i++) {
        frequency[str[i]]++; // Increment the frequency of the character
    }

    cout << "Non-repeating characters: ";
    bool found = false; // Flag to check if any non-repeating character exists

    // Step 2: Identify non-repeating characters using another plain for loop
    for (int i = 0; i < str.length(); i++) {
        if (frequency[str[i]] == 1) { // Check if the frequency is 1
            cout << str[i] << " "; // Print the non-repeating character
            found = true;
        }
    }

    if (!found) {
        // If no non-repeating characters were found
        cout << "None";
    }

    cout << endl; // Print a new line for better formatting
}

// Main function
int main() {
    string input;

    // Input string from the user
    cout << "Enter a string: ";
    getline(cin, input);

    // Find and display non-repeating characters
    findNonRepeatingCharacters(input);

    return 0; // Return 0 to indicate successful execution
}
