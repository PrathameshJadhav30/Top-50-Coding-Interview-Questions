#include <bits/stdc++.h>
using namespace std;

int main() 
{
    // Initialize the variables for the pattern with wildcards and the input string.
    string wild, str;

    // Accept the inputs from the user.
    cout << "Enter string containing wild characters: ";
    cin >> wild; // The pattern string containing '?' and '*'.
    cout << "Enter string to be matched: ";
    cin >> str;  // The string to match against the pattern.

    // Define boolean values for readability.
    bool TRUE = true, FALSE = false;

    // Create a 2D array (dynamic programming table) to store match results.
    bool check[wild.length() + 1][str.length() + 1];

    // Base case: An empty pattern matches an empty string.
    check[0][0] = TRUE;

    // Initialize the first row: No pattern matches a non-empty string.
    for (int i = 1; i <= str.length(); i++)
        check[0][i] = FALSE;

    // Initialize the first column: A pattern with '*' can match an empty string.
    for (int i = 1; i <= wild.length(); i++) {
        if (wild[i - 1] == '*') // If the character is '*', inherit the result from the previous row.
            check[i][0] = check[i - 1][0];
        else
            check[i][0] = FALSE; // Non-'*' characters can't match an empty string.
    }

    // Fill the rest of the table based on the pattern and input string.
    for (int i = 1; i <= wild.length(); i++) {
        for (int j = 1; j <= str.length(); j++) {
            if (wild[i - 1] == str[j - 1]) {
                // Characters match, inherit the result from the top-left diagonal cell.
                check[i][j] = check[i - 1][j - 1];
            } 
            else if (wild[i - 1] == '?') {
                // '?' matches exactly one character, inherit from the diagonal cell.
                check[i][j] = check[i - 1][j - 1];
            } 
            else if (wild[i - 1] == '*') {
                // '*' matches zero or more characters.
                // Inherit from either the cell above (match '*' with no characters) or 
                // the cell to the left (match '*' with one or more characters).
                check[i][j] = check[i - 1][j] || check[i][j - 1];
            } 
            else {
                // Characters do not match.
                check[i][j] = FALSE;
            }
        }
    }

    // Print the result: Check the bottom-right cell of the DP table.
    if (check[wild.length()][str.length()])
        cout << "TRUE"; // Strings match.
    else
        cout << "FALSE"; // Strings do not match.

    return 0;
}
