//  write a program to input a character from the user and print it's ASCII code .

#include <stdio.h>
int main () 
{
    char ch;
    printf("Enter a charater ");
    scanf("%c", &ch);
    printf("ASCII code id %d", ch);
    printf("\n");
    return 0;
}