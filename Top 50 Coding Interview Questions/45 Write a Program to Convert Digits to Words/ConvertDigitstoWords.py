from num2words import num2words

# Convert a number to words in the default format (cardinal numbers).
print(num2words(11098))  # Output: 'eleven thousand ninety-eight'

# Convert a number to its ordinal representation (e.g., 1st, 2nd, etc.).
print(num2words(11098, to='ordinal'))  # Output: 'eleven thousand ninety-eighth'
