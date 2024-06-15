//  write a program to take as an inputin below given format and convert the time format and display the result as given below.

//  use input data format - HH:MM
// Output format "HH hours and MM minutes"

#include <stdio.h>
int main()
{
    int H,M;
    printf("Enter HH:MM");
    scanf("%d:%d", &H, &M);
    printf("%d hours and %d minutes",H,M);
    printf("\n");
    return 0;

}