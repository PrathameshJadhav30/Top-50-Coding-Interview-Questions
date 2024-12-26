# Function to check if a number is Automorphic
def is_automorphic(num):
    sq = num * num  # Calculate the square of the number
    original_num = num  # Store the original number for later display

    # Check for Automorphic by comparing digits
    while num > 0:
        # Compare the last digit of the number with the last digit of its square
        if num % 10 != sq % 10:
            return f"{original_num} is not an Automorphic number."
        num //= 10  # Remove the last digit of the number
        sq //= 10  # Remove the last digit of the square

    # If all digits match, it is Automorphic
    return f"{original_num} is an Automorphic number."

# Input from the user
num = int(input("Enter a positive number to check: "))

# Display the result
print(is_automorphic(num))
