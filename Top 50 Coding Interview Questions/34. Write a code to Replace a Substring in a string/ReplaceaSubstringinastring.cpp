#include <iostream>   // For input and output
#include <string>     // For string manipulation
using namespace std;

int main() {
    // Declare variables for input string, substring, replacement, and output string
    string str, substr, replace, output;
    int start = -1; // Variable to store the starting index of the substring, initialized to -1 (not found)

    // Take input from the user
    cout << "Enter the main string: ";
    getline(cin, str); // Read the entire line as input
    cout << "Enter the substring to replace: ";
    getline(cin, substr);
    cout << "Enter the replacement string: ";
    getline(cin, replace);

    // Find the starting position of the substring
    size_t pos = str.find(substr); // Use `find` function to locate the substring
    if (pos != string::npos) {    // If substring is found
        start = pos;              // Store the starting position

        // Copy the portion of the string before the substring
        output = str.substr(0, start);

        // Append the replacement string
        output += replace;

        // Append the portion of the string after the substring
        output += str.substr(start + substr.length());

        // Display the final string
        cout << "Output: " << output << endl;
    } else {
        // If substring is not found, display an appropriate message
        cout << "\"" << substr << "\" is not a substring of \"" << str << "\"" << endl;
    }

    return 0; // Exit the program
}
