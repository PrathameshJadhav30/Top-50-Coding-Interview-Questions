#include <iostream>
#include <string>
using namespace std;

// Function to check if a string is palindrome
bool isPalindrome(string str) {
    int start = 0;               // Initialize start index
    int end = str.length() - 1;  // Initialize end index

    // Traverse the string from both ends
    while (start < end) {
        // If characters at start and end are not equal
        if (str[start] != str[end]) {
            return false;  // Not a palindrome
        }
        start++;  // Move start index to the right
        end--;    // Move end index to the left
    }
    return true;  // The string is a palindrome
}

int main() {
    string str;

    // Input the string
    cout << "Enter a string: ";
    cin >> str;

    // Check if the string is a palindrome
    if (isPalindrome(str)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
