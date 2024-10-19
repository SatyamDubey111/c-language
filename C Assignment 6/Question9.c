// Write a program which takes length of a sides as an input whether the triangle is valid or not.

#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter a sides of triangle");
    scanf("%d %d %d", &a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    printf("valid triangle");
    else
    printf("not valid trangle");
    printf("/n");
    return 0;
}