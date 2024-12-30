# Function to count inversions in an array
def inversion(arr):
    ans = 0  # Initialize the count of inversions to 0
    # Iterate through the array elements
    for i in range(len(arr)):
        # Compare each element with the elements after it
        for j in range(i + 1, len(arr)):
            # If a later element is smaller than the current element,
            # it contributes to an inversion
            if arr[j] < arr[i]:
                ans += 1
    return ans  # Return the total count of inversions

# Example array
array = [6, 3, 5, 2, 7]

# Print the number of inversions in the array
print("There are", inversion(array), "possible inversions")
