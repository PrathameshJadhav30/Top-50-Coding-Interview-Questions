#include <iostream>
using namespace std;

// Function to find the sum of natural numbers using recursion
int sumOfNaturalNumbers(int n) {
    if (n == 0) {
        return 0; // Base case: The sum of numbers up to 0 is 0
    }
    return n + sumOfNaturalNumbers(n - 1); // Recursive call
}

int main() {
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Please enter a positive integer." << endl;
    } else {
        cout << "The sum of the first " << num << " natural numbers is: " 
             << sumOfNaturalNumbers(num) << endl;
    }

    return 0;
}
