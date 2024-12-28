#include <bits/stdc++.h> // Includes all standard libraries
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50}; // Initialize an array of integers
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    // Loop through the array in reverse order
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " "; // Print each element followed by a space
    }
}
