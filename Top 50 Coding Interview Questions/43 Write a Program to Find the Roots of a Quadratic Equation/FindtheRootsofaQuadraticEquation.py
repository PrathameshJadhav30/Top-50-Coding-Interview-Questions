import math

def findRoots(a, b, c):
    """
    Function to find and print the roots of a quadratic equation ax^2 + bx + c = 0
    Parameters:
        a (int/float): Coefficient of x^2
        b (int/float): Coefficient of x
        c (int/float): Constant term
    """
    # Check if 'a' is zero (not a valid quadratic equation)
    if a == 0:
        print("Invalid input: 'a' should not be zero for a quadratic equation.")
        return

    # Calculate the discriminant (b^2 - 4ac)
    discriminant = b * b - 4 * a * c
    sqrt_val = math.sqrt(abs(discriminant))  # Compute square root of |discriminant|

    # Check the nature of the roots
    if discriminant > 0:
        # Real and different roots
        print("Roots are real and different:")
        print(f"Root 1: {(-b + sqrt_val) / (2 * a):.2f}")
        print(f"Root 2: {(-b - sqrt_val) / (2 * a):.2f}")
    elif discriminant == 0:
        # Real and same roots
        print("Roots are real and the same:")
        print(f"Root: {-b / (2 * a):.2f}")
    else:
        # Complex roots
        print("Roots are complex:")
        real_part = -b / (2 * a)
        imaginary_part = sqrt_val / (2 * a)
        print(f"Root 1: {real_part:.2f} + i{imaginary_part:.2f}")
        print(f"Root 2: {real_part:.2f} - i{imaginary_part:.2f}")

# Driver code to test the function
a = 1
b = 4
c = 4

# Function call
findRoots(a, b, c)
