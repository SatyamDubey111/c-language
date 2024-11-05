// write a program to print the 20 even natural number 

#include <stdio.h>
int main()
{
    int s;
    for(s=2;s<=20;s++)
    {
        if(s%2 == 0)
        {
           printf("%d\n",s);
           
        }
    }
}