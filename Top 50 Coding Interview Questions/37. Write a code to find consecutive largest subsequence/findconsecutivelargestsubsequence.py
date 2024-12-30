def LongestConseqSubseq(arr, l):
    # List to store lengths of consecutive subsequences
    val = []
    c = 0  # Counter to track the length of the current subsequence

    # Iterate through each element in the array
    for i in range(l):
        n = 1  # Initialize the step for consecutive checking

        # Check if consecutive elements exist in the array
        while arr[i] + n in arr:
            c += 1  # Increment counter for each consecutive element
            n += 1  # Move to the next possible consecutive element

        # Add the length of the current sequence to the list
        val.append(c + 1)
        c = 0  # Reset counter for the next element

    # Return the maximum length from the list of subsequence lengths
    return max(val)

# Input array
array = [7, 8, 1, 5, 4, 3]

# Output the length of the longest consecutive subsequence
print("Longest Consecutive Subsequence:", LongestConseqSubseq(array, len(array)))
