# Function to find the sum of natural numbers using recursion
def sum_of_natural_numbers(n):
    if n == 0:
        return 0  # Base case: The sum of numbers up to 0 is 0
    return n + sum_of_natural_numbers(n - 1)  # Recursive call

# Input from the user
num = int(input("Enter a positive integer: "))

if num < 0:
    print("Please enter a positive integer.")
else:
    print(f"The sum of the first {num} natural numbers is: {sum_of_natural_numbers(num)}")
