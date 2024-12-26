#include<stdio.h>
int main()
{
    int value,count=0;
    printf("Enter an integer: ");
    scanf("%d", &value);
    while(value!=0) {
        value/=10;
        count++;
    
    }
    printf("Number of digits are %d", count);
    
    return 0;
}