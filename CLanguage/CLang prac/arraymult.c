//This is a program to multiply 2 arrays and store the result in a 3rd array
//This is a 1D array multiplication program
#include<stdio.h>
int main()
{
    int a[5],b[5],c[5];
    printf("Enter the elements of the first array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of the second array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&b[i]);
    }
    for(int i=0;i<5;i++)
    {
        c[i]=a[i]*b[i];
    }
    printf("The result array is: ");
    for(int i=0;i<5;i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
