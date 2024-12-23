# Function to check if a number is a perfect number
def is_perfect_number(num):
    """
    Checks whether a number is a perfect number.
    
    Args:
        num (int): The number to check.
    
    Returns:
        bool: True if the number is perfect, False otherwise.
    """
    if num <= 1:
        # A perfect number must be greater than 1
        return False

    # Initialize sum to store the sum of divisors
    divisor_sum = 0

    # Loop to find divisors of num
    for i in range(1, num // 2 + 1):
        if num % i == 0:
            # If i is a divisor, add it to the divisor_sum
            divisor_sum += i

    # A number is perfect if the sum of its divisors equals itself
    return divisor_sum == num

# Input from the user
number = int(input("Enter a number: "))

# Check if the number is a perfect number
if is_perfect_number(number):
    print(f"{number} is a Perfect Number.")
else:
    print(f"{number} is not a Perfect Number.")
