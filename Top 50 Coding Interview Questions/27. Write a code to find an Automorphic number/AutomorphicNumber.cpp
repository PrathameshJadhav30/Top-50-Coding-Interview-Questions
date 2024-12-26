#include<iostream>
using namespace std;

// Main program
int main() {
    int num, flag = 0; // Variable 'flag' is used to determine if the number is Automorphic
    cout << "Enter a positive number to check: ";
    cin >> num; // User input for the number to be checked

    int sq = num * num; // Calculate the square of the number
    int store = num; // Store the original number for display later

    // Check for Automorphic number
    while (num > 0) {
        // Compare the last digit of the number with the last digit of its square
        if (num % 10 != sq % 10) {    
            flag = 1; // Set flag to 1 if digits do not match
            break; // Exit the loop if not Automorphic
        }
        num = num / 10; // Remove the last digit of the number
        sq = sq / 10; // Remove the last digit of the square
    }

    // Check the flag and display the result
    if (flag == 1)
        cout << store << " is not an Automorphic number.";
    else
        cout << store << " is an Automorphic number.";

    return 0; // Exit the program
}
