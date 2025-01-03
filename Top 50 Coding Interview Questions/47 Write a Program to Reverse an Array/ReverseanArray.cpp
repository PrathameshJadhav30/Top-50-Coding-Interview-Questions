#include <bits/stdc++.h>
using namespace std;

int main() {
    // Initialize the array
    int arr[] = {10, 20, 30, 40, 50};
    
    // Calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Print the array in reverse order
    for (int i = n - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    // Add a newline for better output formatting
    cout << endl;

    return 0;
}
