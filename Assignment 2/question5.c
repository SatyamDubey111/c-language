// write a program to ask the user about the cost price and selling price banana per dozen calculate the profit and loss earn upon sellingg  25 banana .
// -> 
// simple sa ganit hai user se puchna hai  ki banana ki ocst priced ayur sellig pricekya hai 

#include <stdio.h>

int main() 
{
    float cp,sp,profit;

    printf("Enter the value of cp and sp of 12 banana ");
    scanf("%f%f", &cp,&sp);
    profit = (sp-cp)*25/12.0;
    printf("the profit and loss of per dozen banana is %f", profit);
    printf("\n");
    return 0;
}
