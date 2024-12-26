#include <stdio.h>

#define MAX 10  // Maximum size for rows and columns of the matrices

int main() {
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX]; // Declare arrays for matrices
    int row1, col1, row2, col2;

    // Input dimensions of the first matrix
    printf("Enter the number of rows and columns of the first matrix (A): ");
    scanf("%d %d", &row1, &col1);

    // Input dimensions of the second matrix
    printf("Enter the number of rows and columns of the second matrix (B): ");
    scanf("%d %d", &row2, &col2);

    // Check if matrix multiplication is possible
    if (col1 != row2) {
        printf("Matrix multiplication not possible. The number of columns in A must equal the number of rows in B.\n");
        return 1;  // Exit the program if multiplication is not possible
    }

    // Input elements of the first matrix (A)
    printf("Enter elements of matrix A (%dx%d):\n", row1, col1);
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Input elements of the second matrix (B)
    printf("Enter elements of matrix B (%dx%d):\n", row2, col2);
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize the result matrix (C) to zero
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            C[i][j] = 0;
        }
    }

    // Perform matrix multiplication
    for (int i = 0; i < row1; i++) {          // Row of A
        for (int j = 0; j < col2; j++) {      // Column of B
            for (int k = 0; k < col1; k++) {  // Iterate through the row of A and column of B
                C[i][j] += A[i][k] * B[k][j]; // Multiply and accumulate
            }
        }
    }

    // Output the result matrix (C)
    printf("Resultant matrix C (A x B):\n");
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
