# Function to calculate GCD using the Euclidean algorithm
def find_gcd(a, b):
    """
    Calculates the Greatest Common Divisor (GCD) of two numbers using the Euclidean algorithm.
    """
    # Ensure the inputs are non-negative
    a, b = abs(a), abs(b)

    # Loop until one of the numbers becomes zero
    while b != 0:
        a, b = b, a % b  # Update a with b and b with the remainder

    return a  # GCD is the last non-zero value of a

# Input two integers from the user
num1 = int(input("Enter the first integer: "))
num2 = int(input("Enter the second integer: "))

# Calculate and display the GCD
print(f"GCD of {num1} and {num2} is {find_gcd(num1, num2)}")
