#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int *p1 = &a;
    int *p2 = &b;

    printf("Value of a: %d\n", a);
    printf("Value of b: %d\n", b);

    printf("Pointer p1 points to value: %d\n", *p1);
    printf("Pointer p2 points to value: %d\n", *p2);

    // Changing values using pointers
    *p1 = 30;
    *p2 = 40;

    printf("New value of a: %d\n", a);
    printf("New value of b: %d\n", b);

    return 0;
}