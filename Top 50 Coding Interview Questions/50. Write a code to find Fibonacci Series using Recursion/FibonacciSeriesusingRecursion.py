# Function to calculate the nth Fibonacci number
def Fibo(n):
    """
    Calculates the nth Fibonacci number using recursion.

    Args:
    n (int): The position in the Fibonacci sequence (0-indexed).

    Returns:
    int: The nth Fibonacci number.
    """
    if n < 0:
        print("Incorrect input! Please enter a non-negative integer.")
        return None  # Return None for invalid input
    elif n == 0:
        return 0  # 1st Fibonacci number is 0
    elif n == 1:
        return 1  # 2nd Fibonacci number is 1
    else:
        # Recursive case
        return Fibo(n - 1) + Fibo(n - 2)


# Main Program (without if __name__ == "__main__":)
n = 9
print(f"The {n}th Fibonacci number is: {Fibo(n)}")
