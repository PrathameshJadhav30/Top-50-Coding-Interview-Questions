#include <iostream> // Include necessary library for input/output
#include <string>   // Include string library for string manipulation
using namespace std;

// Function to replace a substring in a string
string replaceSubstring(const string& original, const string& toReplace, const string& replacement) {
    string result = original; // Create a copy of the original string
    size_t pos = result.find(toReplace); // Find the first occurrence of the substring to replace

    // Loop to replace all occurrences of the substring
    while (pos != string::npos) {
        result.replace(pos, toReplace.length(), replacement); // Replace the substring
        pos = result.find(toReplace, pos + replacement.length()); // Find the next occurrence
    }

    return result; // Return the modified string
}

// Main function
int main() {
    string original, toReplace, replacement;

    // Input strings from the user
    cout << "Enter the original string: ";
    getline(cin, original);
    cout << "Enter the substring to replace: ";
    getline(cin, toReplace);
    cout << "Enter the replacement substring: ";
    getline(cin, replacement);

    // Replace the substring and display the result
    string modifiedString = replaceSubstring(original, toReplace, replacement);
    cout << "Modified string: " << modifiedString << endl;

    return 0; // Return 0 to indicate successful execution
}
