# Function to print Fibonacci series up to the nth term
def print_fibonacci(n):
    """
    Prints the Fibonacci series up to the nth term.
    """
    # Initialize the first two terms of the Fibonacci series
    t1, t2 = 0, 1

    # Edge case: If n is less than 1, there's no series
    if n <= 0:
        print("Please enter a positive integer.")
        return

    print("Fibonacci Series:", end=" ")

    # Print the Fibonacci series
    for _ in range(n):
        print(t1, end=" ")  # Print the current term
        t1, t2 = t2, t1 + t2  # Update t1 to t2, and t2 to the new term

    print()  # Move to the next line after printing the series

# Input from the user
n = int(input("Enter the number of terms: "))

# Call the function to print Fibonacci series
print_fibonacci(n)
