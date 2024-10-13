// Write a program to check whether number is a three digit number or not.

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    if(x>99 && x<1000)
    {
        printf("The given number is three digit");
    }
    else
    {
        printf("The given number is not three digit");
    }

    printf("\n");

    return 0;
}