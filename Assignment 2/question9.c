//  write a programto take date as an input in below given format an d convert the date format and display the result as given below.

// USer input date format -(DD/MM/YY)- "22/11/2022"
//  output format - " Day - DD, MOnth -MM , year - YYYY"(Day-27, Month-07, Year-2022)

#include <stdio.h>
int main()
{
    int d,m,y;
    printf("Enter Date (D/M/Y)");
    scanf("%d/%d/%d", &d,&m,&y);
    printf("%d/%d/%d", d,m,y);
    printf("\n");
    return 0;
}