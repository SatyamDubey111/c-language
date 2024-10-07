//Write a program to print a given number with out it's last digit .

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    printf("Number with out it's last digit %d", x/10);
    printf("\n");
    return 0;

}