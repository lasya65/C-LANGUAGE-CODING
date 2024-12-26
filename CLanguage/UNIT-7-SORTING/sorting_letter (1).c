
#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter length of arr: ");
    scanf("%d", &n);
    getchar();

    char A[n+1], cmp, temp;

    printf("Enter your name: ");
    fgets(A,sizeof(A),stdin);

    for (int sl = 0; sl < (n - 1); sl++)
    {
        for (cmp = (sl + 1); cmp < n; cmp++)
        {
            if (A[sl] > A[cmp])
            { // COMPARISON
                temp = A[sl];
                A[sl] = A[cmp]; // SWAPPING
                A[cmp] = temp;
            }
        }
    }

    printf("Sorted name is : %s", A);

    return 0;
}