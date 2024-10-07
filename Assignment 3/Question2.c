//Write a program to calculate size of areal constant .

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    x = sizeof(5.5);
    printf("%d", x);
    printf("\n");
    return 0;
}