//THIS PROGRAM IS TO WRITE TWO FUNCTIONS TO FIND THE FACTORIAL OF A NUMBER AND SWAP TWO NUMBERS AS PER THE USER'S REQUIREMENTS USING FUNCTION POINTERS
#include <stdio.h>

int factorial(int);
int swap(int *, int *);

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    // Function pointer for factorial
    int (*fact_ptr)(int) = &factorial;
    int result = fact_ptr(n);
    printf("The factorial of %d is %d\n", n, result);

    int a, b;
    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    // Function pointer for swap
    int (*swap_ptr)(int *, int *) = &swap;
    swap_ptr(&a, &b);
    printf("The swapped numbers are: %d %d\n", a, b);

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

int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}