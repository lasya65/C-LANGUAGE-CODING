//THIS CODE IS FOR FINDING LENGTH OF REGISTRATION NUMBER USING POINTER EG-RA2411030010041
#include <stdio.h>
int main()
{
    char reg[15];
    char *ptr;
    int count = 0;
    printf("Enter the registration number: ");
    scanf("%s", reg);
    ptr = reg;
    while (*ptr != '\0')
    {
        count++;
        ptr++;
    }
    printf("Length of registration number is: %d\n", count);
    return 0;
}