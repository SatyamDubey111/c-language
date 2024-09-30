// Write a program to swap values of two int variable in single line airthmetic expression.
 
#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers");
    scanf("%d %d",&a,&b);
    a = (a+b) - (b=a);
    // b = (a+b)-a;
    printf("Swapping value is %d %d",a,b);
    printf("\n");
    return 0;

}
 