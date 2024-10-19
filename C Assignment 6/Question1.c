// Write a program to check weather a given number is a three digit number or not.


#include  <stdio.h>
int main()

{

    int x;

    printf("Please enter a number");
    scanf("%d", &x);

    if(x>99 && x<1000)
    {
        printf("you entered number is in three digit ");
    }
    else 
    {
        printf("your entered number is not in three digit ");
    }

    printf("\n");

    return 0;
}

//  second method ( x>=100 && x<=1000);