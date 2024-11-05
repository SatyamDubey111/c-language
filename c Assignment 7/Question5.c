// Write a program to print a the frist 10 odd naturalnumber in reverse order .

#include <stdio.h>

int main()
{
    int count = 10;
    int i;
    for( i = count*2-1 ; count > 0 ; i -= 2)
    {
        printf("%d\n",i );
        count --;
    }
   
}