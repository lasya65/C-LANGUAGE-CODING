#include <stdio.h>
int main()
{
    char str [100];
    int length = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Characters in the string are:");
    for (int i = 0; str[i] != '\0'; i++)
    {
        length++;
}
    printf("Length of the string is: %d\n", length);
    return 0;
}