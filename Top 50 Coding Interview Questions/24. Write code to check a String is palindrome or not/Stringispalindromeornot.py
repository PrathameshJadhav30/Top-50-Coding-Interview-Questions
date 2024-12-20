# Function to check if a string is palindrome
def is_palindrome(s):
    start = 0                   # Initialize start index
    end = len(s) - 1            # Initialize end index

    # Traverse the string from both ends
    while start < end:
        # If characters at start and end are not equal
        if s[start] != s[end]:
            return False   # Not a palindrome
        start += 1         # Move start index to the right
        end -= 1           # Move end index to the left

    return True  # The string is a palindrome

# Input the string
s = input("Enter a string: ")

# Check if the string is a palindrome
if is_palindrome(s):
    print("The string is a palindrome.")
else:
    print("The string is not a palindrome.")
