# Function to reverse a list in place
def reverseList(A, start, end):
    while start < end:
        # Swap the elements at the start and end indices
        A[start], A[end] = A[end], A[start]
        # Move the start pointer forward and the end pointer backward
        start += 1
        end -= 1

# Driver code to test the function
A = [10, 20, 30, 40, 50]  # Input list
reverseList(A, 0, len(A) - 1)  # Reverse the entire list
print(A)  # Output the reversed list
