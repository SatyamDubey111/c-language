// Write a program to check a whether a given year is a leap year.
#include <stdio.h>

int main()
{
    int year;
    printf("Enter a year");
    scanf("%d",&year);

    if(year%4==0)
    {
        printf("Leap year");

    }
    else
    {
        printf("non leap year");
    }

    printf("\n");

    return 0;


}