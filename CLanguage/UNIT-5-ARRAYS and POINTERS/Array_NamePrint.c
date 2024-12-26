#include <stdio.h>

int main() {
    // Declare a character array to store the name
    char name[100];
    
    // Prompt the user to enter the name
    printf("Enter the student name: ");
    scanf("%s", name);
    
    // Initialize a counter to calculate the length
    int length = 0;
    
    // Loop through the array until the null character '\0' is encountered
    while (name[length] != '\0') {
        length++;
    }
    
    // Output the length of the registration number
    printf("The length of the student name is: %d\n", length);
    
    return 0;
}
