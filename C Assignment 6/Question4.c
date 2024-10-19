// Write a program to check weather a given alphabet is in uppercase or lower case.

#include <stdio.h>

int main()
{
    char x;
    printf("Enter a alphabet character");
    scanf("%c",&x);

    if(x>='a' && x<='z')
    {
        printf("Lower case aplhabet");

    }
    else if(x>='A'&& x<='Z')
    {
      printf("Upper case Alphabet");

    }
    else
    {
        printf("Not a alphabet");
    }

    printf("\n");

    return 0;
}