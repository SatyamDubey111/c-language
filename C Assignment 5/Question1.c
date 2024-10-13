// Write a program to check wether a given number is positive or non positive.


#include <stdio.h>
int main() 
{
    int a;
    printf("Enter a number ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("Positive");
    }
    else
    {
        printf("negative");
    }

    printf("\n");
    return 0;
}