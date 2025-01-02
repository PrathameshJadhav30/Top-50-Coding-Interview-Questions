#include <iostream>  // For input/output operations
#include <cmath>     // For mathematical functions like sqrt
using namespace std;

/*
Function to print all prime factors of a given number 'n'.
*/
void primeFactors(int n) {
    // Print the number of 2s that divide n
    while (n % 2 == 0) {
        cout << 2 << " ";
        n = n / 2;
    }

    // n must be odd at this point, so we can skip even numbers
    for (int i = 3; i <= sqrt(n); i += 2) {
        // While i divides n, print i and divide n
        while (n % i == 0) {
            cout << i << " ";
            n = n / i;
        }
    }

    // This condition is to check if n is a prime number
    // greater than 2
    if (n > 2) {
        cout << n << " ";
    }
}

// Driver code
int main() {
    int n = 315; // Number to find the prime factors of

    // Call the function to print prime factors
    primeFactors(n);

    return 0;
}
