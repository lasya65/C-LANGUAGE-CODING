#include <stdio.h>

int main() {
    char regNo[15];
    int length = 0;
    
    printf("Enter the registration number: ");
    scanf("%s", regNo);
    
    while (regNo[length] != '\0') {
        length++;
    }
    
    printf("The length of the registration number is: %d\n", length);
    
    return 0;
}
