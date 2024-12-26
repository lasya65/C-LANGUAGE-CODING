#include <stdio.h>

// Function to check if a number is even
int isEven(int x) {
    return x % 2 == 0;
}

int main() {
    int number;
    
    // Input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is even or odd
    if (isEven(number)) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
