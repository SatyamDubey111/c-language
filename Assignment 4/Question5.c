// Write a program to input a number from the user and also input a digit. Apend a digit in the number and print the resulting number. (example - number = 234 and digit=9 then the resullting number is 2349 ). 

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    x= 234*10+9;
    printf("Number is %d",x);
    printf("\n");
    return 0;

}
