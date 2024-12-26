#include<stdio.h>
int main() {
    int amtgiven, billamt;
    scanf("%d", &billamt);
    scanf("%d", &amtgiven);
    
    if (billamt <5 || billamt >2500) {
        printf("Invalid Input\n");
        return 1;
    }
    if (amtgiven < 5 || amtgiven > 2500) {
        printf("Invalid Input\n");
        return 1;

    }
    if (billamt== 0) {
        printf("Error: Division by zero\n");
        return 1;

    }else {
        int quotient = amtgiven / billamt;
        int remainder = amtgiven % billamt;
        printf("Quotient = %d\n", quotient);
        printf("Remainder = %d\n", remainder);
        
    }
    return 0;
}