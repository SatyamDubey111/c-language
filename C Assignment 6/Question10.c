// Write a program which takes the month number as a input and display number of days in that month.

// 1,3,5,7,10,12 -> 31 days
// 4,6,9,11 -> 30 days
// 2 -> 28 or 29 days 

#include <stdio.h>
int main()
{
    int m;
    printf("enter a month number");
    scanf("%d",&m);
    m = 1-12;
    if(m==1 || m==3 || m==5 || m==7 || m==10 || m==12)
    printf("31 days");
    else if(m==4 || m==6 || m==9 || m==11)
    printf("30 days");

    printf("/n");
    return 0;
}