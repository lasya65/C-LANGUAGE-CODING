#include<stdio.h>
int main() {
    //DECLARE VARIABLES
    int a, b;
    //INPUT
    printf("Enter the value of a and b: ");
    scanf("%d %d", &a, &b);
    //PROCESS
    int sum = a + b;
    int diff = a - b;
    int multiple = a * b;

    // Check if b is zero before performing division to prevent runtime error
    if (b != 0) {
        float div = (float)a / b;  // Cast one variable to float for floating-point division
        //OUTPUT
        printf("a=%d, b=%d\n", a, b);
        printf("Sum of a and b is: %d\n", sum);
        printf("Difference of a and b is: %d\n", diff);
        printf("Product of a and b is: %d\n", multiple);
        printf("Division of a by b is: %.6f\n", div);  // Print float with 6 decimal places
    } else {
        printf("Division by zero is not allowed.\n");
    }
    return 0;
}
