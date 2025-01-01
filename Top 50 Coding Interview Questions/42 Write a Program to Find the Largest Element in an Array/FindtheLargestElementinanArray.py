# Initialize a list with given elements
a = [10, 89, 9, 56, 4, 80, 8]

# Assume the first element is the maximum
max_element = a[0]

# Iterate through the list to find the maximum element
for i in range(len(a)):
    # Update max_element if the current element is greater
    if a[i] > max_element:
        max_element = a[i]

# Print the maximum element
print("The maximum element in the list is:", max_element)
