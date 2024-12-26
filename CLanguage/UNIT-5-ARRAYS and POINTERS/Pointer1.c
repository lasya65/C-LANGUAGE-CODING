#include <stdio.h>

int main() {
    // Allocate 16 spaces: 15 for the registration number and 1 for the null terminator
    char regNo[16]; 
    
    // Pointer to traverse the array
    char *ptr = regNo;
    
    // Variable to store each character and the length counter
    char ch;
    int length = 0;
    
    // Prompt the user to enter the registration number
    printf("Enter the registration number (exactly 15 characters): ");
    
    // Read exactly 15 characters using getchar()
    while ((ch = getchar()) != '\n' && length < 15) {
        *ptr = ch;  // Store the character in the array
        ptr++;      // Move pointer to next position
        length++;   // Increment the length
    }

    // Null-terminate the string explicitly
    *ptr = '\0';  // Add null terminator after 15 characters
    
    // Output the length of the registration number
    printf("The length of the registration number is: %d\n", length);
    
    return 0;
}
