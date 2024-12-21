# Function to get matrix input from the user
def get_matrix(rows, cols, matrix_number):
    print(f"Enter elements of Matrix {matrix_number}:")
    matrix = []
    for i in range(rows):
        row = []
        for j in range(cols):
            value = int(input(f"Element at [{i}][{j}]: "))
            row.append(value)
        matrix.append(row)
    return matrix

# Function to add two matrices
def add_matrices(matrix1, matrix2, rows, cols):
    result = []
    for i in range(rows):
        row = []
        for j in range(cols):
            row.append(matrix1[i][j] + matrix2[i][j])
        result.append(row)
    return result

# Function to display a matrix
def display_matrix(matrix):
    for row in matrix:
        print(" ".join(map(str, row)))

# Main function
def main():
    # Get dimensions of the matrices
    rows = int(input("Enter the number of rows: "))
    cols = int(input("Enter the number of columns: "))

    # Input the two matrices
    matrix1 = get_matrix(rows, cols, 1)
    matrix2 = get_matrix(rows, cols, 2)

    # Add the two matrices
    sum_matrix = add_matrices(matrix1, matrix2, rows, cols)

    # Display the result
    print("The sum of the matrices is:")
    display_matrix(sum_matrix)

# Run the main function
if __name__ == "__main__":
    main()
