# Function to check whether a given year is a leap year
def is_leap_year(year):
    """
    Determines if a given year is a leap year.

    Args:
        year (int): The year to check.

    Returns:
        bool: True if the year is a leap year, False otherwise.
    """
    # A year is a leap year if it is divisible by 4 but not divisible by 100,
    # or if it is divisible by 400.
    if (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0):
        return True  # It's a leap year
    else:
        return False  # It's not a leap year

# Input: Get the year from the user
year = int(input("Enter a year: "))

# Check if the year is a leap year and print the result
if is_leap_year(year):
    print(f"{year} is a leap year.")
else:
    print(f"{year} is not a leap year.")
