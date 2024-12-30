#include <bits/stdc++.h>
using namespace std;

// Function to merge two sorted subarrays and count inversions
int merge(int arr[], int temp[], int left, int mid, int right) {
    int i = left;      // Index for left subarray
    int j = mid + 1;   // Index for right subarray
    int k = left;      // Index for merged array
    int inv_count = 0; // Count of inversions

    // Merge the two subarrays while counting inversions
    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inv_count += (mid - i + 1); // Count inversions
        }
    }

    // Copy remaining elements of left subarray, if any
    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    // Copy remaining elements of right subarray, if any
    while (j <= right) {
        temp[k++] = arr[j++];
    }

    // Copy merged elements back to the original array
    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return inv_count;
}

// Recursive function to sort the array and count inversions
int _mergeSort(int arr[], int temp[], int left, int right) {
    int mid, inv_count = 0;

    if (left < right) {
        mid = left + (right - left) / 2; // Avoids overflow for large indices

        // Recursively sort the left and right subarrays and count inversions
        inv_count += _mergeSort(arr, temp, left, mid);
        inv_count += _mergeSort(arr, temp, mid + 1, right);

        // Merge the sorted subarrays and add inversion count
        inv_count += merge(arr, temp, left, mid, right);
    }

    return inv_count;
}

// Function to sort the array and count inversions
int mergeSort(int arr[], int n) {
    int temp[n]; // Temporary array for merging
    return _mergeSort(arr, temp, 0, n - 1);
}

int main() {
    // Input array size
    int n;
    cin >> n;

    int arr[n]; // Declare array
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Input array elements
    }

    // Count and print the number of inversions
    int ans = mergeSort(arr, n);
    cout << "Number of inversions are: " << ans << endl;

    return 0;
}
