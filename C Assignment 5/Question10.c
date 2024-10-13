// Write a program to find to greatest among three given numbers. Print number once if the greatest number two or three times.


#include <stdio.h>
int main()
{
    int a,b,c;

    printf("Enter a numbers");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
    printf("%d is the greatest",a);
    else if(b>a && b>c)
    printf("%d is the greatest",b);
    else 
    printf("%d is the greatest",c);

    printf("/n");
    return 0;
    

}