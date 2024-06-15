// wrte a program to input thrre character from the user and display cgaracter with  their correspondingASCII codes .

#include <stdio.h> 
int main()
{
    char a,b,c;
    printf("Enter three chracter");
    scanf("%c %c %c", &a, &b, &c);  // scanf ke liye space tab aur new line  or ' ' , '\t' , '\n' -> delimiter
    // jiska matlab hai  hamne %c %c %c teeno me space diya hai jiskamatlab hai user koinput karte wakt pahle jowo type karega ek character ( upar wale teeno ka matlabscanf ko same lagta hai); dusra character jo type karoge to delimiter hona chhiye ye dat ko seprate karta hain 
    printf("%c - %d\n", a,a);
    printf("%c - %d\n", b,b);
    printf("%c - %d\n", c,c);
    printf("\n");
    return 0;

}