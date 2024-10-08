// Write a program to take three digit number from the user and rotate it's digits by one position toward the right.


#include <stdio.h>
int main()
{
    int x;
    printf("Enter anumber");
    scanf("%d",&x);
    x = x%10*100+x/10;
    printf("rotate thrree digit number is %d", x);
    printf("\n");
    return 0;
}

