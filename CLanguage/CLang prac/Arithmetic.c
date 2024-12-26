#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b==0){
    printf("Error: Division by 0 is invalid");
    }else {

    printf("Addition: %d\n",a+b);
    printf("Subtraction: %d\n",a-b);
    printf("Multiplication: %d\n",a*b);
    printf("Division: %f\n", (float)a/b);
        }
    
    return 0;
    }