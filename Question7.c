// Write a program to swap values of two variables with out using third variable.

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a two number");
    scanf("%d%d",&a,&b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf ("%d%d", a,b);
    printf("\n");
    return 0;
    

}