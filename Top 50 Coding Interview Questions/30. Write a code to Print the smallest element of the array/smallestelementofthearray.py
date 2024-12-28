# Initialize an array of integers
arr = [34, 5, 89, 90, 56]

# Calculate the number of elements in the array (optional in Python)
n = len(arr)

# Initialize a variable to store the minimum value, set to a very large number
mini = float('inf')

# Loop through the array to find the minimum value
for i in range(n):
    if arr[i] < mini:  # Check if the current element is smaller than the current minimum
        mini = arr[i]  # Update the minimum value

# Print the minimum value in the array
print(mini)
