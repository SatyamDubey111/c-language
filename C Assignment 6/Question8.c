// Write a program to weather a given character is an alphabet(uppercase), an alphabet (lower case) a digit or a special character.

#include <stdio.h>

int main()
{
    char x;
    printf("enter a character");
    scanf("%c",&x);
    if(x>='a' && x<='z')
    printf("alphabet is in lowercase");
    else if(x>='A' && x<='z')
    printf("Albhabet is in upper case");
    else if(x>='0' && x<='9')    // zero and nine is not a number its in string format
    printf("Entered charactered is in digit" );
    else
    printf("Special character");
     
     printf("\n");
     return 0;

}
