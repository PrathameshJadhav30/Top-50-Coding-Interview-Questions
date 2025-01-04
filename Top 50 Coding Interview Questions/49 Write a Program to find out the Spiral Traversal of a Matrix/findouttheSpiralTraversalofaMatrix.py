def spiral_traversal(matrix):
    """
    Prints the elements of the matrix in spiral order.

    Args:
    matrix (list of list of int): The 2D matrix to be traversed.
    """
    if not matrix:
        print("Empty matrix.")
        return

    # Initialize boundaries
    top, bottom = 0, len(matrix) - 1
    left, right = 0, len(matrix[0]) - 1

    # Perform spiral traversal
    print("Spiral order of the matrix:")
    while left <= right and top <= bottom:
        # Traverse from left to right along the top row
        for i in range(left, right + 1):
            print(matrix[top][i], end=" ")
        top += 1  # Move the top boundary down

        # Traverse from top to bottom along the right column
        for i in range(top, bottom + 1):
            print(matrix[i][right], end=" ")
        right -= 1  # Move the right boundary left

        # Traverse from right to left along the bottom row
        if top <= bottom:
            for i in range(right, left - 1, -1):
                print(matrix[bottom][i], end=" ")
            bottom -= 1  # Move the bottom boundary up

        # Traverse from bottom to top along the left column
        if left <= right:
            for i in range(bottom, top - 1, -1):
                print(matrix[i][left], end=" ")
            left += 1  # Move the left boundary right


# Get user input for the matrix
R, C = 4, 4  # Dimensions of the matrix (can be made dynamic)
print(f"Enter the elements of a {R}x{C} matrix row by row:")

matrix = []
for _ in range(R):
    row = list(map(int, input().split()))
    if len(row) != C:
        print(f"Error: Please enter exactly {C} elements for each row.")
        exit(1)
    matrix.append(row)

# Perform spiral traversal
spiral_traversal(matrix)
