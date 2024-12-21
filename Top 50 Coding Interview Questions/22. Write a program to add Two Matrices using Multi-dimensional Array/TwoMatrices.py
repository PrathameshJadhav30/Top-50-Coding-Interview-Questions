# Function to add two matrices
def add_matrices(matrix1, matrix2):
    # Get the number of rows and columns in the matrices
    rows = len(matrix1)
    cols = len(matrix1[0])

    # Initialize an empty matrix to store the result
    result = [[0 for _ in range(cols)] for _ in range(rows)]

    # Loop through each element of the matrices
    for i in range(rows):
        for j in range(cols):
            result[i][j] = matrix1[i][j] + matrix2[i][j]  # Add corresponding elements

    return result  # Return the result matrix

# Input: Get the number of rows and columns from the user
rows = int(input("Enter the number of rows: "))
cols = int(input("Enter the number of columns: "))

# Initialize two matrices to store user input
matrix1 = []
matrix2 = []

# Get input for the first matrix
print("Enter the elements of the first matrix:")
for i in range(rows):
    row = []
    for j in range(cols):
        row.append(int(input(f"Enter element [{i+1},{j+1}] of matrix 1: ")))
    matrix1.append(row)

# Get input for the second matrix
print("Enter the elements of the second matrix:")
for i in range(rows):
    row = []
    for j in range(cols):
        row.append(int(input(f"Enter element [{i+1},{j+1}] of matrix 2: ")))
    matrix2.append(row)

# Ensure both matrices are of the same dimensions
if len(matrix1) == len(matrix2) and len(matrix1[0]) == len(matrix2[0]):
    # Call the function to add the matrices and print the result
    result_matrix = add_matrices(matrix1, matrix2)
    print("The sum of the matrices is:")
    for row in result_matrix:
        print(row)  # Print each row of the result matrix
else:
    print("Matrices cannot be added due to dimension mismatch.")
