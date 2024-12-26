#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *temp; // Temporary pointer for swapping
    char *pname[3]; // Array of pointers to hold the names

    // Allocate memory and read names
    for (int i = 0; i < 3; i++) {
        pname[i] = (char *)malloc(10 * sizeof(char)); // Allocate memory for each name
        if (pname[i] == NULL) { // Check if memory allocation was successful
            printf("Memory allocation failed\n");
            return 1; // Exit if memory allocation fails
        }
        scanf("%s", pname[i]); // Read name from user
    }

    // Sort the names using bubble sort
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            if (strcmp(pname[i], pname[j]) > 0) { // Compare names
                // Swap the names if they are in the wrong order
                temp = pname[i];
                pname[i] = pname[j];
                pname[j] = temp;
            }
        }
    }

    printf("\n");

    // Print the sorted names and free allocated memory
    for (int i = 0; i < 3; i++) {
        printf("%s\n", pname[i]); // Print each name
        free(pname[i]); // Free the allocated memory
    }

    return 0;
}