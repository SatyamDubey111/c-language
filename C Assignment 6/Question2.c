//Write a program which takes the cost  price and selling price of a product from the user. Now calculate and print profit or loss percentage.

#include <stdio.h>
 int main()
 {
    float sp,cp,p,l;
    printf("Enter a Selling price and cost price");
    scanf("%f %f ", &sp,&cp);

    if(sp-cp >=0)
    {
        p = (sp-cp/cp*100);

        printf("%f" , p);

    }
    else
    {
       l=(cp-sp)/cp*100;
       printf( "%f",l);
    }


 } 