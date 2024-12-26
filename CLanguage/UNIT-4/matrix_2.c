#include <stdio.h>
#include <stdlib.h>

// Function to display a matrix
void displayMatrix(int n, int mat[][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Function to multiply two matrices and store the result in res
void multiplyMatrices(int n, int mat1[][n], int mat2[][n], int res[][n]) {
    int temp[n][n]; // Temporary storage to avoid overwriting
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            temp[i][j] = 0;
            for (int k = 0; k < n; k++) {
                temp[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    // Copy result back to res matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            res[i][j] = temp[i][j];
        }
    }
}

// Function to find the characteristic polynomial of a 2x2 matrix
void characteristicPolynomial(int n, int mat[][n], int result[]) {
    if (n == 2) {
        int trace = mat[0][0] + mat[1][1];  // sum of diagonal elements
        int det = (mat[0][0] * mat[1][1]) - (mat[0][1] * mat[1][0]);  // determinant

        // The characteristic polynomial: λ^2 - (trace)*λ + det = 0
        result[0] = 1;       // λ^2 term coefficient
        result[1] = -trace;  // λ term coefficient
        result[2] = det;     // constant term
    } else if (n == 3) {
        // For a 3x3 matrix, calculate trace and determinant for characteristic polynomial
        int trace = mat[0][0] + mat[1][1] + mat[2][2];
        int det = mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) -
                  mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) +
                  mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);

        // The characteristic polynomial for 3x3: λ^3 - (trace)*λ^2 + ... (not fully implemented here)
        result[0] = 1;        // λ^3 term coefficient
        result[1] = -trace;   // λ^2 term coefficient
        result[2] = det;      // constant term (just a simple calculation here)
    }
}

// Function to calculate the highest power of the matrix
void matrixPower(int n, int mat[][n], int power, int result[][n]) {
    int temp[n][n];
    
    // Initialize result as the identity matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j)
                result[i][j] = 1;
            else
                result[i][j] = 0;
        }
    }

    // Multiply matrix with itself 'power' times
    for (int p = 0; p < power; p++) {
        multiplyMatrices(n, result, mat, temp);
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                result[i][j] = temp[i][j];
            }
        }
    }
}

int main() {
    int n, power;
    
    // Input order of matrix
    printf("Enter the order of the matrix (2 or 3): ");
    scanf("%d", &n);

    if (n < 2 || n > 3) {
        printf("This program supports only 2x2 or 3x3 matrices.\n");
        return 0;
    }

    int matrix[n][n];
    int result[n][n]; // To store the power of matrix

    // Input elements of matrix
    printf("Enter elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Input power of matrix
    printf("Enter the power to which the matrix should be raised: ");
    scanf("%d", &power);

    printf("Matrix you entered:\n");
    displayMatrix(n, matrix);

    // Calculate the power of the matrix
    matrixPower(n, matrix, power, result);

    // Display the matrix raised to the given power
    printf("Matrix raised to power %d:\n", power);
    displayMatrix(n, result);

    // Calculate the characteristic polynomial (optional)
    int charPoly[n+1]; // To store the characteristic polynomial coefficients
    characteristicPolynomial(n, matrix, charPoly);

    printf("Characteristic Polynomial: λ^%d ", n);
    for (int i = 1; i <= n; i++) {
        printf("+ (%d)λ^%d ", charPoly[i], n-i);
    }
    printf("\n");

    return 0;
}
