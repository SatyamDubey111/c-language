//  write a program to input an ASCII code from the user and print it's corressponding character.


#include <stdio.h>
int main()
{
    int ac;
    printf("Enter a ASCII code");
    scanf("%d", &ac); 
    printf("ACSII code is %C", ac);
    printf("\n");
    return 0;
}