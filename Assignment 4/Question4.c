// write a program to  a make last digit of a number stored in avariable as a zero .
// (Example - if x= 2345 then make it x= 2340).

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    x = x/10*10;
    printf("the number is %d",x);
    printf("\n");
    return 0;
}