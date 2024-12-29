#include <iostream> // Include input-output stream library
using namespace std; // Use the standard namespace to avoid prefixing 'std::'

// Function to remove all spaces from a given string
void removeSpaces(char *str)
{
    // To keep track of the position for non-space characters in the modified string
    int count = 0;

    // Traverse the provided string
    for (int i = 0; str[i]; i++) // Loop until the null terminator '\0'
    {
        // If the current character is not a space
        if (str[i] != ' ')
        {
            // Move the character to the position 'count' and increment 'count'
            str[count++] = str[i];
        }
    }

    // Null-terminate the string after removing spaces
    str[count] = '\0';
}

// Driver program to test the above function
int main()
{
    // Declare a character array to store user input
    char str[100];

    // Prompt the user for input
    cout << "Enter a string (up to 100 characters): ";
    cin.getline(str, 100); // Read a line of input including spaces

    // Call the function to remove spaces from the string
    removeSpaces(str);

    // Output the modified string
    cout << "String after removing spaces: " << str << endl;

    return 0; // Indicate successful program termination
}
