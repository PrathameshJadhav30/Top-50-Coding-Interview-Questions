# Prompt the user to enter the base number
num = float(input("Enter the base number: "))  # Convert input to float for flexibility

# Prompt the user to enter the exponent
power = float(input("Enter the exponent: "))  # Convert input to float for handling decimals

# Use the built-in pow() function to calculate num raised to the power
result = pow(num, power)

# Print the result
print(f"{num} ^ {power} = {result}")  # Display the result in a formatted string
