#include <bits/stdc++.h> // Includes all standard libraries in C++ for faster implementation
using namespace std;

// Function to sort the array in ascending order
void sorted(int arr[], int n) {

    // Nested loop for sorting using the bubble sort algorithm
    for (int i = 0; i < n - 1; i++) {         // Outer loop to iterate through all elements
        for (int j = i + 1; j < n; j++) {     // Inner loop to compare elements with the current element
            if (arr[i] > arr[j]) {            // Swap if the current element is greater than the compared element
                int temp = arr[i];           // Temporary variable to hold the value during swap
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Loop to print the sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";                // Output each element of the sorted array
}

int main() {

    int arr[] = {10, 89, 67, 45, 83, 9, 12};   // Initialize the array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]);     // Calculate the number of elements in the array

    sorted(arr, n);                           // Call the sorting function
}
