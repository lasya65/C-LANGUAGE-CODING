#include<stdio.h>
int main() {
    int a,b;
    printf("Enter the value of a and b: ");
    scanf("%d %d",&a,&b);
    printf("The entered numbers are a=%d, b=%d\n",a,b);
    printf("%d\n", a==b);
    printf("%d\n", a>b);
    printf("%d\n", a<b);
    printf("%d\n", a>=b);
    printf("%d\n", a<=b);
    printf("%d\n", a!=b);
    return 0;
}