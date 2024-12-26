#include <stdio.h>

int main() {
    int n;
    printf("Enter length of name (including spaces): ");
    scanf("%d", &n);
    getchar();  // To consume the newline character after entering the length

    char A[n + 1], temp;

    printf("Enter your name: ");
    fgets(A, sizeof(A), stdin);

    // Selection sort algorithm
    for (int sl = 0; sl < (n - 1); sl++) {
        for (int cmp = (sl + 1); cmp < n; cmp++) {
            if (A[sl] > A[cmp]) {  // Comparison
                // Swap characters
                temp = A[sl];
                A[sl] = A[cmp];
                A[cmp] = temp;
            }
        }
    }

    printf("Sorted name is: %s", A);

    return 0;
}