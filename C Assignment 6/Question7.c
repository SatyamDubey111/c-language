// Write a program to check weather a given number is positive, negative or Zero.

#include <stdio.h>

int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);

    if(x>0)

    printf("Numberis positive");

    
    else if(x<0)
    printf("Number is negative");

    else
    printf("zero");

    printf("\n");
  
  return 0;
}

// a>0?"positive": a<0?"negative":"zero"