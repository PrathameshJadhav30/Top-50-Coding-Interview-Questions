#include <bits/stdc++.h> // Includes all standard libraries
using namespace std;

int main() {
    int arr[] = {34, 5, 89, 90, 56}; // Initialize an array of integers
    int n = sizeof(arr) / sizeof(arr[0]); // Calculate the number of elements in the array

    int mini = INT_MAX; // Initialize a variable to store the minimum value, set to the maximum possible integer value

    // Loop through the array to find the minimum value
    for (int i = 0; i < n; i++) {
        if (arr[i] < mini) // Check if the current element is smaller than the current minimum
            mini = arr[i]; // Update the minimum value
    }

    cout << mini; // Print the minimum value in the array
}
