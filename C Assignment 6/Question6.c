// Write a program to check weather a given number is divisible 7 or divisible by 3.

#include <stdio.h>

int main()
{
    int x;

    printf("Enter a Number");
    scanf("%d", &x);

    if(x%7==0 || x%3==0)
    printf("%d is divisible by 3 or 7", x);
    else
    printf("%d is not divisible by 3 or 7", x);
    printf("\n");
    return 0;
}