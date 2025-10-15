#include <stdio.h>

// Function to transpose the matrix (swap upper and lower triangles)
void transposeMatrix(int size, int matrix[size][size]) {
    for (int row = 0; row < size; row++) {
        for (int col = row + 1; col < size; col++) {
            int temp = matrix[row][col];
            matrix[row][col] = matrix[col][row];
            matrix[col][row] = temp;
        }
    }
}

// Function to display the matrix
void displayMatrix(int size, int matrix[size][size]) {
    for (int row = 0; row < size; row++) {
        for (int col = 0; col < size; col++) {
            printf("%4d", matrix[row][col]);
        }
        printf("\n");
    }
}

int main() {
    int n;

    printf("Enter the size of the square matrix (n): ");
    scanf("%d", &n);

    int matrix[n][n];
    printf("Enter the elements of the %dx%d matrix:\n", n, n);

    // Input matrix elements
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nOriginal Matrix:\n");
    displayMatrix(n, matrix);

    // Transpose (swap triangles)
    transposeMatrix(n, matrix);

    printf("\nMatrix after Transpose (Symmetry along the main diagonal):\n");
    displayMatrix(n, matrix);

    return 0;
}