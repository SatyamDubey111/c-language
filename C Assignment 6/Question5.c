//write a program to check weather  a given number is divisible by 3 and divisible by 2.

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x%2==0 &&x%3==0)

    printf("%d is divisible by 2 and 3" , x);
    else
    printf("%d is not divisible by 2 and 3", x);

    printf("\n");

    return 0;
}