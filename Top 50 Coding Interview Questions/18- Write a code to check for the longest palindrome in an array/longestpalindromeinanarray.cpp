#include <iostream> // Include necessary library for input/output
#include <vector>   // Include vector library to handle arrays
#include <string>   // Include string library for palindrome checks
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    string str = to_string(num); // Convert number to string
    int left = 0, right = str.size() - 1;

    // Check if the string reads the same forward and backward
    while (left < right) {
        if (str[left] != str[right]) {
            return false; // Not a palindrome
        }
        left++;
        right--;
    }
    return true; // Is a palindrome
}

// Function to find the longest palindrome in an array
int findLongestPalindrome(const vector<int>& arr) {
    int longestPalindrome = -1; // Variable to store the longest palindrome
    for (int num : arr) {
        if (isPalindrome(num)) {
            // Check if the current palindrome is longer than the previous
            if (longestPalindrome == -1 || to_string(num).size() > to_string(longestPalindrome).size()) {
                longestPalindrome = num;
            }
        }
    }
    return longestPalindrome;
}

// Main function
int main() {
    vector<int> arr = {121, 123, 454, 12, 78987, 678}; // Example array
    int longestPalindrome = findLongestPalindrome(arr);

    if (longestPalindrome != -1) {
        cout << "The longest palindrome in the array is: " << longestPalindrome << endl;
    } else {
        cout << "No palindrome found in the array." << endl;
    }

    return 0; // Return 0 to indicate successful execution
}
