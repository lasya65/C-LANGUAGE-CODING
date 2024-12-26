#include<stdio.h>
int printArray(int); //with arguments
int main()
{
    int value;
    scanf("%d", &value);
    int res = printArray(value);
    printf("The recieved value is: %d", res);
    return 0;


}