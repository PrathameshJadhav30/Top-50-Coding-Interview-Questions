# Function to find the sum of natural numbers using recursion
def sum_of_natural_numbers(n):
    # Base case: If n is 0, the sum is 0
    if n == 0:
        return 0
    # Recursive case: Add the current number to the sum of (n-1)
    return n + sum_of_natural_numbers(n - 1)

# Input: Get the value of n (the last natural number) from the user
n = int(input("Enter a positive integer: "))

# Check if the input is a valid positive integer
if n < 0:
    print("Please enter a positive integer.")
else:
    # Call the function to find the sum of natural numbers up to n
    result = sum_of_natural_numbers(n)
    
    # Output: Display the sum
    print(f"The sum of the first {n} natural numbers is: {result}")
