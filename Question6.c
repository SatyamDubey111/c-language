// Write a program to swap values of two int variables.

#include <stdio.h>
int main() 
{
    int a,b,c;
    printf("Enter a number");
    scanf("%d%d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d%d",a,b);
    printf("\n");
    return 0;

}