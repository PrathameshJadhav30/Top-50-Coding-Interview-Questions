#include <iostream>
#include <vector>
using namespace std;

// Function to perform Bubble Sort
void bubbleSort(vector<int>& arr) {
    int n = arr.size();

    // Outer loop for each pass through the array
    for (int i = 0; i < n - 1; i++) {
        // Flag to check if any swapping occurred in this pass
        bool swapped = false;

        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // Swap if the current element is greater than the next element
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true; // Mark as swapped
            }
        }

        // If no swapping occurred, the array is already sorted
        if (!swapped) {
            break;
        }
    }
}

// Main function to test Bubble Sort
int main() {
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    cout << "Original array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    bubbleSort(arr);

    cout << "Sorted array: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
