// write a progarm to swap to values of two values of two int varible without using third variable and Airthmatic opreator. 

// airthmetic opreator -> +,-,/,*

#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter the two number");
    scanf("%d %d", &a, &b);
    b = a^(a^b);
    a = b^(a^b);

    printf("possibe two swaping values is %d %d",a,b);
    printf("\n");
    return 0;
}