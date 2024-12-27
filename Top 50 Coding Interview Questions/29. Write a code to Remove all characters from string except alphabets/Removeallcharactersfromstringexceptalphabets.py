# Python program to remove non-alphabetical characters from a string

# Accepting input from the user
input_str = input("Enter a string: ")

# Using a list comprehension to filter only alphabetical characters
# The isalpha() method checks if the character is an alphabet
filtered_str = ''.join([char for char in input_str if char.isalpha()])

# Displaying the processed string
print("After removing non-alphabetical characters, the string is:", filtered_str)
