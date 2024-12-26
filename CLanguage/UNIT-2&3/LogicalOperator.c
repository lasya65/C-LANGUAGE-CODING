#include <stdio.h>

int main() {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("a = %d, b = %d\n", a, b);
    printf("Logical AND: %d\n", a%2==0 && b%5==0);
    printf("Logical OR: %d\n", a%2==0 || b%5==0);

    return 0;
}