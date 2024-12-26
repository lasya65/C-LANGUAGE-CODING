#include <stdio.h>

int main()
{
    char c1, c2;
    // Input
    printf("Enter two characters: ");
    scanf("%c %c", &c1, &c2);
    printf("You entered: %c and %c\n", c1, c2);
    // output with ASCII values
    printf("ASCII value of %c: %d\n", c1, c1);
    printf("ASCII value of %c: %d\n", c2, c2);

    return 0;
}