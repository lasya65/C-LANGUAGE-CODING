#include<stdio.h>
int main()
{
int i;

printf("Enter the value of i");
scanf("%d",&i);
printf("\n%d" ,i++);
printf("\n%d",++i);
printf("\n%d",i--);
printf("\n%d",--i);

return 0;
}