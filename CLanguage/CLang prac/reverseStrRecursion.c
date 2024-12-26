//This is a program to reverse a string using recursion
#include <stdio.h> 
void reverseStr(char str[])
{
    if (str[0] == '\0')
    {
        return;
    }
    reverseStr(str + 1);
    printf("%c", str[0]);
}