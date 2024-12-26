// This code is for dynamic memory allocation in C
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    // Dynamically allocate memory using malloc()
    int *arr = (int *)malloc(n * sizeof(int));

    // Check if the memory has been successfully allocated by malloc or not
    if (arr == NULL)
    {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else
    {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");

        // Get the elements of the array
        for (int i = 0; i < n; ++i)
        {
            arr[i] = i + 1;
        }

        // Print the elements of the array
        printf("The elements of the array are: ");
        for (int i = 0; i < n; ++i)
        {
            printf("%d ", arr[i]);
        }
    }

    // Free the allocated memory
    free(arr);
    printf("\nMemory successfully freed.\n");

    return 0;
}
