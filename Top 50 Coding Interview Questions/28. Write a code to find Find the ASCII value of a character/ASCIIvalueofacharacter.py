# Python program to calculate the ASCII value of a character

# Prompt the user to enter a character
val = input("Enter a character: ")

# Check if the input is a single character
if len(val) == 1:
    # Use the ord() function to get the ASCII value of the character
    print(f"The ASCII value of '{val}' is {ord(val)}")
else:
    print("Please enter a single character.")
