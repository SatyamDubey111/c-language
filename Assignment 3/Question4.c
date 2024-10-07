// Write a program to print unit digit of a given number .

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d", &x);
    x=x%10;
    printf("unit digit is %d",x);
    printf("\n");
    return 0;

}