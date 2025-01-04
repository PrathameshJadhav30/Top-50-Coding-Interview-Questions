#include <iostream>
#include <string>
using namespace std;

int main() {
    // Initialize the variables
    string wild, str;

    // Accept the inputs
    cout << "Enter string containing wild characters: ";
    cin >> wild;
    cout << "Enter string to be matched: ";
    cin >> str;

    int m = wild.length();
    int n = str.length();
    
    // Create a 2D array for dynamic programming
    bool check[m + 1][n + 1] = {false};

    // Initialize the DP table
    check[0][0] = true;

    // Handle the case where wild characters start with '*'
    for (int i = 1; i <= m; i++) {
        if (wild[i - 1] == '*') {
            check[i][0] = check[i - 1][0];
        } else {
            check[i][0] = false;
        }
    }

    // Fill the DP table
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            if (wild[i - 1] == str[j - 1] || wild[i - 1] == '?') {
                check[i][j] = check[i - 1][j - 1];
            } else if (wild[i - 1] == '*') {
                check[i][j] = check[i - 1][j] || check[i][j - 1];
            } else {
                check[i][j] = false;
            }
        }
    }

    // Printing the result
    if (check[m][n]) {
        cout << "TRUE";
    } else {
        cout << "FALSE";
    }

    return 0;
}
