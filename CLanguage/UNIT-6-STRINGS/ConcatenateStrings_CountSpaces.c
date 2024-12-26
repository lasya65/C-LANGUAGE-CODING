#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[100];
    int spaces = 0;
    printf("Enter first string: ");
    scanf("%s", str1);  
    printf("Enter second string: ");
    scanf("%s", str2);  
    strcat(str1, str2); // Concatenates str2 to str1
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == ' ') {
            spaces++;
        }
    }
    printf("Concatenated string: %s\n", str1);
    printf("Number of spaces: %d\n", spaces);
    return 0; 
}
    