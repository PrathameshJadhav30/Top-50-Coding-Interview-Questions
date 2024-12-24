# Function to perform Bubble Sort
def bubble_sort(arr):
    n = len(arr)

    # Outer loop for each pass through the array
    for i in range(n - 1):
        # Flag to check if any swapping occurred in this pass
        swapped = False

        # Inner loop for comparing adjacent elements
        for j in range(n - i - 1):
            # Swap if the current element is greater than the next element
            if arr[j] > arr[j + 1]:
                arr[j], arr[j + 1] = arr[j + 1], arr[j]
                swapped = True  # Mark as swapped

        # If no swapping occurred, the array is already sorted
        if not swapped:
            break

# Test the Bubble Sort function
arr = [64, 34, 25, 12, 22, 11, 90]
print("Original array:", arr)

bubble_sort(arr)

print("Sorted array:", arr)
