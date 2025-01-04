def solve(a, b):
    """
    Recursively checks if the string 'b' matches the pattern 'a',
    where 'a' can contain wildcards '*' and '?'.

    Args:
    a (str): Pattern string containing wildcards ('*', '?').
    b (str): Target string to match.

    Returns:
    bool: True if the pattern matches the string, False otherwise.
    """
    n, m = len(a), len(b)

    # If both strings are empty, they match.
    if n == 0 and m == 0:
        return True

    # If pattern contains '*' but target is empty, check the rest of the pattern.
    if n > 1 and a[0] == '*' and m == 0:
        return solve(a[1:], b)

    # If the first character matches or if '?' is used as a wildcard.
    if (n > 0 and m > 0 and a[0] == b[0]) or (n > 0 and a[0] == '?'):
        return solve(a[1:], b[1:])

    # If '*' is encountered, it can match zero or more characters.
    if n > 0 and a[0] == '*':
        return solve(a[1:], b) or solve(a, b[1:])

    # If none of the above cases match, the pattern and string don't match.
    return False

# Take user input for both strings.
str1 = input("Enter the first string (with wild characters): ")
str2 = input("Enter the second string (without wild characters): ")

# Print the input strings.
print("First string with wild characters:", str1)
print("Second string without wild characters:", str2)

# Call the solve function and print the result.
if solve(str1, str2):
    print("The strings match!")
else:
    print("The strings do not match.")
