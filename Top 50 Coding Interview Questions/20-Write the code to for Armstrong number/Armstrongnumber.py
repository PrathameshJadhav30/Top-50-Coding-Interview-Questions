# Function to check if a number is an Armstrong number
def is_armstrong(num):
    # Convert the number to a string to find the number of digits
    num_str = str(num)
    digits = len(num_str)

    # Calculate the sum of each digit raised to the power of the number of digits
    sum_of_powers = sum(int(digit) ** digits for digit in num_str)

    # Check if the sum is equal to the original number
    return sum_of_powers == num

# Main function to execute the program
def main():
    # Prompt user for input
    num = int(input("Enter a number: "))

    # Check if the number is an Armstrong number and display the result
    if is_armstrong(num):
        print(f"{num} is an Armstrong number.")
    else:
        print(f"{num} is not an Armstrong number.")

# Execute the main function
if __name__ == "__main__":
    main()
