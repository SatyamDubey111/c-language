// Write a program to check whether a given number is an positive number or an negative number with out using % operator. 

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    if(x>0)
    printf("positive");
    else if(x<0)
    printf("Negative");
    else
    printf("Zero");
    
    printf("/n");
    return 0;
}

// if (x/2 *2 ==x) -> is a even number, else : odd (without using % operator) 