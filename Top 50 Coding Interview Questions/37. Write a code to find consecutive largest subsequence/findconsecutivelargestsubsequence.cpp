#include <bits/stdc++.h>
using namespace std;

// Function to find the length of the longest contiguous subsequence
int findLongestConseqSubseq(int arr[], int n) {
    // Use an unordered set to store unique elements for O(1) lookup
    unordered_set<int> elements(arr, arr + n);
    int longestStreak = 0; // Variable to track the maximum length

    // Iterate over the unique elements
    for (int num : elements) {
        // Check if 'num' is the start of a sequence
        if (elements.find(num - 1) == elements.end()) {
            int currentNum = num;    // Start of the sequence
            int currentStreak = 1;  // Length of the current sequence

            // Count the consecutive elements in the sequence
            while (elements.find(currentNum + 1) != elements.end()) {
                currentNum++;
                currentStreak++;
            }

            // Update the longest streak if the current sequence is longer
            longestStreak = max(longestStreak, currentStreak);
        }
    }

    return longestStreak; // Return the length of the longest contiguous subsequence
}

// Driver code
int main() {
    int arr[] = {1, 3, 2, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Output the result
    cout << "Length of the Longest Contiguous Subsequence is "
         << findLongestConseqSubseq(arr, n) << endl;

    return 0;
}
