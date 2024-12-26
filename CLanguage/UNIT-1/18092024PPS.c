#include<stdio.h>
// #include<conio.h>
// /// @brief
// int main()
// {
//  int a,b,t;
//  clrscr();
//  printf("Enter the numbers : ");
//  scanf("%d%d",&a,&b);
//  printf("\nBefore Swapping");
//  printf("\na=%d",a);
//  printf("\nb=%d",b);
//  t=a;
//  a=b;
//  b=t;
//  printf("\nAfter Swapping");
//  printf("\na=%d",a);
//  printf("\nb=%d",b);
//  getch();
// }

int main()
{
    int a, b;
    // clrscr();
    printf("Enter the numbers : ");
    scanf("%d%d", &a, &b);
    printf("\nBefore Swapping");
    printf("\na=%d", a);
    printf("\nb=%d", b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("\nAfter Swapping");
    printf("\na=%d", a);
    printf("\nb=%d", b);
}