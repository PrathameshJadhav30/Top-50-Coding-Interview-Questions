# Function to reverse a number
def reverse_number(num):
    reversed_num = 0  # Variable to store the reversed number

    # Loop to extract digits and build the reversed number
    while num != 0:
        digit = num % 10                 # Extract the last digit
        reversed_num = reversed_num * 10 + digit  # Add the digit to the reversed number
        num //= 10                       # Remove the last digit

    return reversed_num  # Return the reversed number

# Prompt user for input
num = int(input("Enter a number: "))

# Call the function and display the reversed number
print("The reversed number is:", reverse_number(num))
