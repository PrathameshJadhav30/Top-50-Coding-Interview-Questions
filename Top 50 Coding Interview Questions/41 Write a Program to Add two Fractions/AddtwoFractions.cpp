#include <iostream>
using namespace std;

// Function to calculate the GCD (Greatest Common Divisor) using the Euclidean algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, den1, num2, den2;

    // Input first fraction
    cout << "Enter numerator and denominator of the first fraction: ";
    cin >> num1 >> den1;

    // Input second fraction
    cout << "Enter numerator and denominator of the second fraction: ";
    cin >> num2 >> den2;

    // Calculate LCM (Least Common Multiple) of the denominators
    int gcdDen = findGCD(den1, den2);
    int lcm = (den1 * den2) / gcdDen;

    // Calculate the sum of fractions
    int numeratorSum = (num1 * (lcm / den1)) + (num2 * (lcm / den2));

    // Simplify the result by finding GCD of the numerator and denominator
    int gcdResult = findGCD(numeratorSum, lcm);
    int simplifiedNumerator = numeratorSum / gcdResult;
    int simplifiedDenominator = lcm / gcdResult;

    // Output the result
    cout << num1 << "/" << den1 << " + " << num2 << "/" << den2
         << " = " << simplifiedNumerator << "/" << simplifiedDenominator << endl;

    return 0;
}