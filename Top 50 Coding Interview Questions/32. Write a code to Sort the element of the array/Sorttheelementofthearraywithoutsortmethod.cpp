#include <bits/stdc++.h> // Header file that includes standard libraries
using namespace std;

// Function to sort an array in ascending order using Bubble Sort
void sorted(int arr[], int n) {
    // Outer loop to traverse the array multiple times
    for (int i = 0; i < n - 1; i++) {
        // Inner loop for comparison and swapping
        for (int j = i + 1; j < n; j++) {
            // Swap elements if the current element is greater than the next element
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

int main() {
    int arr[] = {10, 89, 67, 45, 83, 9, 12}; // Array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]);   // Calculate the number of elements in the array

    sorted(arr, n); // Call the sorting function
}
