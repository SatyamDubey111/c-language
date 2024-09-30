// Write a program to swap values of two int variable with out using third variable and with out using +,- opreator .

#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers");
    scanf("%d%d",&x,&y);
    x = x*y;
    y = x/y;
    x = x/y;
    printf("the swap value of to number is %d and %d",x,y);
    printf("\n");
    return 0;

}