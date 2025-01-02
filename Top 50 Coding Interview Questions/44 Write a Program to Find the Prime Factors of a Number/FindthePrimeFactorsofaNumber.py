def prime_factorization(n):
    """
    Function to calculate and return the list of prime factors of a given number n.
    Parameters:
        n (int): The number to find the prime factors of.
    Returns:
        list: A list containing the prime factors of n.
    """
    if n < 2:
        return [n]  # Numbers less than 2 have no prime factors
    
    factors = []  # List to store the prime factors

    # Check and divide by 2 until n is odd
    while n % 2 == 0:
        factors.append(2)
        n //= 2

    # Check for odd factors starting from 3
    for i in range(3, int(n**0.5) + 1, 2):
        while n % i == 0:  # While i divides n, append i and divide n
            factors.append(i)
            n //= i

    # If n is still greater than 2, it is a prime factor
    if n > 2:
        factors.append(n)

    return factors


# Driver code to test the function
n = 210
print(f"Prime factors of {n} are: {prime_factorization(n)}")
