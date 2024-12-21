#include <iostream>
#include <cctype> // For tolower function
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    // Convert the character to lowercase for simplicity
    ch = tolower(ch);

    // Check if the character is an alphabet
    if (isalpha(ch)) {
        // Check if the character is a vowel
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            cout << ch << " is a vowel." << endl;
        } else {
            cout << ch << " is a consonant." << endl;
        }
    } else {
        cout << ch << " is not an alphabet." << endl;
    }

    return 0;
}
