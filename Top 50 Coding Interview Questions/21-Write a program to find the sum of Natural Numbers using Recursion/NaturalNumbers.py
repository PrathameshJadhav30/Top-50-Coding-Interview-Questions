# Function to calculate the sum of natural numbers using recursion
def sum_of_natural_numbers(n):
    # Base case: If n is 0, the sum is 0
    if n == 0:
        return 0
    # Recursive case: Add the current number to the sum of (n-1)
    return n + sum_of_natural_numbers(n - 1)

# Main function to execute the program
def main():
    # Prompt user for input
    n = int(input("Enter a positive integer: "))

    # Input validation
    if n < 0:
        print("Please enter a positive integer.")
        return  # Exit the program

    # Call the recursive function and display the result
    print(f"The sum of the first {n} natural numbers is: {sum_of_natural_numbers(n)}")

# Execute the main function
if __name__ == "__main__":
    main()
