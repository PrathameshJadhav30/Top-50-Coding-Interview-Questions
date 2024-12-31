# Prompt the user to input a number as a string
num = input("Enter Number: ")

# Initialize the variable 'sum' to store the sum of the digits
sum = 0

# Loop through each character in the input string
for i in num:
    # Convert the character to an integer and add it to the sum
    sum = sum + int(i)

# Print the calculated sum of the digits
print(sum)
