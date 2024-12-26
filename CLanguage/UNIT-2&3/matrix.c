#include <stdio.h>

// Function to multiply two matrices
void multiply_matrices(int n, int mat1[][n], int mat2[][n], int result[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to copy matrix src to dest
void copy_matrix(int n, int src[][n], int dest[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            dest[i][j] = src[i][j];
        }
    }
}

// Function to calculate matrix raised to power
void matrix_power(int n, int mat[][n], int power, int result[][n]) {
    int temp[n][n];
    copy_matrix(n, mat, result); // Initialize result as the original matrix

    for (int p = 1; p < power; p++) {
        multiply_matrices(n, result, mat, temp); // result * mat
        copy_matrix(n, temp, result); // Copy temp to result
    }
}

int main() {
    int n, power;

    // Input the order of the square matrix
    printf("Enter the order of the square matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    int result[n][n];

    // Input the matrix elements
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

    // Input the power for matrix exponentiation
    printf("Enter the power to which the matrix is to be raised: ");
    scanf("%d", &power);

    // Calculate the matrix raised to the power
    matrix_power(n, mat, power, result);

    // Output the result
    printf("Resultant matrix raised to power %d:\n", power);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
