#include <stdio.h>

int main() {
    int a = 5;   // Example value
    int b;

    // Bitwise NOT
    b = ~a;
    printf("Bitwise NOT (~%d): %d\n", a, b);

    // Left Shift
    b = a << 1;  // Shift left by 1 position
    printf("Left Shift (%d << 1): %d\n", a, b);

    b = a << 2;  // Shift left by 2 positions
    printf("Left Shift (%d << 2): %d\n", a, b);

    // Right Shift
    b = a >> 1;  // Shift right by 1 position
    printf("Right Shift (%d >> 1): %d\n", a, b);

    b = a >> 2;  // Shift right by 2 positions
    printf("Right Shift (%d >> 2): %d\n", a, b);

    return 0;
}