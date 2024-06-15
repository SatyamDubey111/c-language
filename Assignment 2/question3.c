//  write a program to calculate simple interst .

#include <stdio.h>

int main()
{
    int p,r,t;
    float interest;
    printf("enter the p,r,t");
    scanf("%d%d%d", &p,&r,&t);
    interest = (p*r*t)/100.0 ;// same as a question ane 
    printf("the simple interest is %f", interest);
    printf("\n");
    return 0;
}