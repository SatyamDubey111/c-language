// Assume price of 1 USD is INR 84.23 . write a program to take the amount in INR and convert it into USD.


#include <stdio.h>
int main()
{
    float x;
    printf("Enter the INR amount");
    scanf("%f",&x);
    x = x/84.23;
    printf("USD amount is %0.2f",x);
    printf("\n");
    return 0;
}

/*
#include <stdio.h>
int main()
{
    float x;
    printf("Enter the USD amount");
    scanf("%f",&x);
    x = x*84.23;
    printf("INR amount is %0.2f",x);
    printf("\n");
    return 0;

    
    
}
*/