def solve(a, b):
    """
    Function to check if two strings match.
    'a' is the pattern string that may contain wildcards ('?' and '*').
    'b' is the target string to be matched.

    Parameters:
    a (str): Pattern string containing wildcards.
    b (str): Target string to match against.

    Returns:
    bool: True if 'a' matches 'b', otherwise False.
    """
    n, m = len(a), len(b)

    # Base case: Both pattern and string are empty, so they match.
    if n == 0 and m == 0:
        return True

    # Base case: Pattern starts with '*' but the string is empty.
    if n > 1 and a[0] == '*' and m == 0:
        return False

    # If the first character matches (or '?' is found in the pattern),
    # recursively check the rest of the strings.
    if (n > 0 and m > 0 and (a[0] == '?' or a[0] == b[0])):
        return solve(a[1:], b[1:])

    # If the first character of the pattern is '*', it can:
    # - Match zero characters (move to the next character in the pattern),
    # - Match one or more characters (move to the next character in the string).
    if n > 0 and a[0] == '*':
        return solve(a[1:], b) or solve(a, b[1:])

    # No match found.
    return False

# Example usage
pattern = "a*d?f"
string = "abcdef"
if solve(pattern, string):
    print("Strings match")
else:
    print("Strings do not match")

