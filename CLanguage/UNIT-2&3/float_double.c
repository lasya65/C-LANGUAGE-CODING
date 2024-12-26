#include <stdio.h>
int main()
{   // Input
    float x = 5.5f, y = 2.3f;
    double z = 8.123456789;
    // Process
    float floatSum = x + y;
    double doubleDivision = z / x;
    // Output
    printf("Sum of two float values: %.2f\n", floatSum);
    printf("Division of double by float: %.4f\n", doubleDivision);

    return 0;
}
