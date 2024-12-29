# Take user input for the string
String = input("Enter a string: ")

# Use the join function to remove spaces
# The split() method splits the string into a list of words, removing all spaces
# The join() method then concatenates the words back into a single string without spaces
String = "".join(String.split())

# Print the modified string after removing spaces
print("After removing spaces, the string is:", String)
