#include <iostream> // Include iostream for input and output operations
#include <cstdio>   // Include cstdio for gets() and puts() functions
using namespace std;

int main() {
    // Declaring a character array to store the string
    char str[100];
    int i, j; // Loop control variables

    // Prompting the user to enter a string
    cout << "Enter a string: ";
    gets(str); // Reading a string input from the user (Note: gets() is unsafe and deprecated)

    // Iterating through each character in the string
    for (i = 0; str[i] != '\0'; ++i) {
        // If the current character is not an alphabet, process it
        while (!( (str[i] >= 'a' && str[i] <= 'z') || 
                  (str[i] >= 'A' && str[i] <= 'Z') || 
                   str[i] == '\0')) {
            // Shift all characters to the left to remove the non-alphabetical character
            for (j = i; str[j] != '\0'; ++j) {
                str[j] = str[j + 1];
            }
            str[j] = '\0'; // Null-terminate the modified string
        }
    }

    // Displaying the processed string after removing non-alphabetical characters
    cout << "After removing non-alphabetical characters, the string is: ";
    puts(str); // Output the resulting string
    return 0; // Return 0 to indicate successful execution
}
