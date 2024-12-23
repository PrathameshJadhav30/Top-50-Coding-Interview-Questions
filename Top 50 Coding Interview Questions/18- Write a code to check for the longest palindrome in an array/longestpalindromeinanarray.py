# Function to check if a number is a palindrome
def is_palindrome(num):
    """
    Checks if a number is a palindrome.

    Args:
        num (int): The number to check.

    Returns:
        bool: True if the number is a palindrome, False otherwise.
    """
    str_num = str(num)  # Convert the number to a string
    return str_num == str_num[::-1]  # Check if the string is the same when reversed

# Function to find the longest palindrome in an array
def find_longest_palindrome(arr):
    """
    Finds the longest palindrome in an array.

    Args:
        arr (list): List of integers.

    Returns:
        int: The longest palindrome in the array. Returns -1 if no palindrome is found.
    """
    longest_palindrome = -1  # Initialize the longest palindrome as -1 (no palindrome found)

    for num in arr:
        if is_palindrome(num):
            # Check if the current palindrome is longer than the previous one
            if longest_palindrome == -1 or len(str(num)) > len(str(longest_palindrome)):
                longest_palindrome = num

    return longest_palindrome

# Example array
arr = [121, 123, 454, 12, 78987, 678]

# Find and display the longest palindrome in the array
longest_palindrome = find_longest_palindrome(arr)
if longest_palindrome != -1:
    print(f"The longest palindrome in the array is: {longest_palindrome}")
else:
    print("No palindrome found in the array.")
