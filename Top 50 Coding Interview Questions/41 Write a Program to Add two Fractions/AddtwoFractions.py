def findGCD(n1, n2):
    """
    Function to calculate the Greatest Common Divisor (GCD) of two numbers
    using a simple iteration method.
    """
    gcd = 0
    # Loop from 1 to the minimum of n1 and n2 (inclusive)
    for i in range(1, int(min(n1, n2)) + 1):
        # Check if i is a divisor of both n1 and n2
        if n1 % i == 0 and n2 % i == 0:
            gcd = i
    return gcd

# Input first fraction
num1, den1 = map(int, input("Enter numerator and denominator of the first fraction (space-separated): ").split())

# Input second fraction
num2, den2 = map(int, input("Enter numerator and denominator of the second fraction (space-separated): ").split())

# Calculate LCM (Least Common Multiple) of the denominators
lcm = (den1 * den2) // findGCD(den1, den2)

# Calculate the numerator of the sum of the fractions
sum_num = (num1 * lcm // den1) + (num2 * lcm // den2)

# Simplify the resulting fraction by dividing numerator and denominator by their GCD
gcd_result = findGCD(sum_num, lcm)
simplified_num = sum_num // gcd_result
simplified_den = lcm // gcd_result

# Output the result
print(f"{num1}/{den1} + {num2}/{den2} = {simplified_num}/{simplified_den}")
