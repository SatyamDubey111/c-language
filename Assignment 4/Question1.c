// write a program to input a three digit number and display the sum of the digits.

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a three digit number");
    scanf("%d",&x);
    x = x/100 + x/10%10 + x%10;
    printf("sum of three digit is %d",x);
    printf("\n");
    return 0;
}