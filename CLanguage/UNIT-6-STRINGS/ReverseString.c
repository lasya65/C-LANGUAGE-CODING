#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int length = strlen(str); // Get the length of the string
    int i;
    char temp;
    // Reverse the string by swapping the characters
    for (i = 0; i < length/2; i++) {
        temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp; 
    }
    printf("Reversed string: %s\n", str);
    return 0;
}
