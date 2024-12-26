#include<stdio.h>
int main() 
{
    //VARIABLE DECLARATION
    float amount_of_coffee, caffeine_per_ml=0.4, caffeine_content;
    //TAKING INPUT
    printf("Enter the amount of coffee(in ml): ");
    scanf("%f", &amount_of_coffee);
    //CALCULATION
    caffeine_content=(caffeine_per_ml*amount_of_coffee)/100;
    //OUTPUT
    printf("The amount of caffeine present in given sample of coffee is: %f mg",caffeine_content);
    return 0;
}