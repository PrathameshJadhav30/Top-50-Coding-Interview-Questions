#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialize an array with given elements
    int arr[] = {10, 89, 67, 56, 45, 78};

    // Calculate the number of elements in the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Initialize max_element with the smallest possible integer value
    int max_element = INT_MIN;

    // Loop through the array to find the maximum element
    for (int i = 0; i < n; i++) {
        // Update max_element if the current array element is greater
        if (arr[i] > max_element) {
            max_element = arr[i];
        }
    }

    // Output the maximum element
    cout << "The maximum element in the array is: " << max_element << endl;

    return 0;
}