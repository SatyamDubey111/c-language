// Write a program to print greater between two numbers. Print one number if one number if both are same .

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter a numbers");
    scanf("%d %d", &a,&b);
    if(a>b)
    {
        printf("%d" , a);
    }
    else
    {
        printf("%d",b);
    }

    printf("\n");

    return 0;
}