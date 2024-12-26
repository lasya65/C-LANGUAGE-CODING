//THIS PROGRAM IS TO FIND THE FACTORIAL OF A NUMBER USING FUNCTION WITH ARGUMENT AND RETURN VALUE
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    int result = factorial(n);
    printf("The factorial of %d is %d", n, result);
    return 0;
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}