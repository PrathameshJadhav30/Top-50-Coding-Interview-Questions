#include <bits/stdc++.h>
using namespace std;

// Function to convert a numeric string to words
void numToWords(string num) {
    int length_of_string = num.size();

    // Handle empty string case
    if (length_of_string == 0) {
        cout << "String is empty\n";
        return;
    }

    // Handle unsupported length case
    if (length_of_string > 4) {
        cout << "Please enter a string with a supported length (up to 4 digits)\n";
        return;
    }

    // Arrays to store words for digits and powers of ten
    string ones_digits[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    string tens_digits[] = {"", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string multiple_of_ten[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
    string power_of_ten[] = {"hundred", "thousand"};

    cout << num << " in words:\n";

    int x = 0;

    while (x < num.size()) {
        if (length_of_string >= 3) {
            // Handle hundreds and thousands places
            if (num[x] - '0' != 0) {
                cout << ones_digits[num[x] - '0'] << " " << power_of_ten[length_of_string - 3] << " ";
            }
            length_of_string--;
        } else {
            // Handle tens and ones places
            if (num[x] - '0' == 1) {
                // Handle numbers from 10 to 19
                int sum = (num[x] - '0') * 10 + (num[x + 1] - '0');
                cout << tens_digits[sum - 10] << " ";
                return;
            } else if (num[x] - '0' >= 2) {
                // Handle multiples of ten
                cout << multiple_of_ten[num[x] - '0'] << " ";
            }
            if (x + 1 < num.size() && num[x + 1] - '0' != 0) {
                // Handle ones place
                cout << ones_digits[num[x + 1] - '0'] << " ";
            }
            break;
        }
        x++;
    }
    cout << endl;
}

// Main function to test the program
int main() {
    numToWords("1121"); // Test case
    return 0;
}
