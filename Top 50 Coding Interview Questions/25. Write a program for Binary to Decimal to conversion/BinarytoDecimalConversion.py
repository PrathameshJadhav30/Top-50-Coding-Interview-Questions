# Function to convert binary to decimal
def binary_to_decimal(binary):
    decimal = 0
    power = 0

    # Traverse the binary string from the last character to the first
    for bit in reversed(binary):
        # Add to the decimal result using the power of 2
        decimal += int(bit) * (2 ** power)
        power += 1

    return decimal

# Input binary number as a string
binary = input("Enter a binary number: ")

# Call the conversion function
decimal = binary_to_decimal(binary)

# Output the result
print("Decimal equivalent:", decimal)
