#include <stdio.h>

int main() {
    // Declare a character array to store the registration number
    char regNo[100];
    
    // Prompt the user to enter the registration number
    printf("Enter the registration number: ");
    scanf("%s", regNo);
    
    // Initialize a counter to calculate the length
    int length = 0;
    
    // Loop through the array until the null character '\0' is encountered
    while (regNo[length] != '\0') {
        length++;
    }
    
    // Output the length of the registration number
    printf("The length of the registration number is: %d\n", length);
    
    return 0;
}
