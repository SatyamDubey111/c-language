// write a program to calculate square of two numbers. numbers are taken from the userthrough keyboard

#include <stdio.h>
int main()  
{
    int a,s;
    printf("Enter a number");

    scanf("%d", &a);
    s = a*a;
    printf("Square of %d is %d", a,s);
    printf("/n");
    return 0;

}