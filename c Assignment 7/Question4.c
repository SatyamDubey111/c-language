//write program to print a 10 odd natural number .

#include <stdio.h>
int main()
{
    int o = 1;
    while(o<=19)
    {
        if(o%2)
        printf("%d " ,o);
        o++;

        // i=i+2; ye lagane se hame if block ki jarurat hi nhi padegi 
        

    }
    printf("\n");
    return 0;
}