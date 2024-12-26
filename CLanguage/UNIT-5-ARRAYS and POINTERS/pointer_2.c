//THIS CODE  IS FOR DOING MATRIX MULTIPLICATION USING ARRAY AND POINTER OF ANY ORDER OF MATRIX BY TAKING USER INPUT
#include <stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10], i, j, k, m, n, p, q;
    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d%d", &m, &n);
    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d%d", &p, &q);
    if (n != p)
    {
        printf("Matrix multiplication is not possible\n");
    }
    else
    {
        printf("Enter the elements of first matrix: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of second matrix: \n");
        for (i = 0; i < p; i++)
        {
            for (j = 0; j < q; j++)
            {
                scanf("%d", &b[i][j]);
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                c[i][j] = 0;
                for (k = 0; k < n; k++)
                {
                    c[i][j] = c[i][j] + a[i][k] * b[k][j];
                }
            }
        }
        printf("The product of the two matrices is: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < q; j++)
            {
                printf("%d\t", c[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
