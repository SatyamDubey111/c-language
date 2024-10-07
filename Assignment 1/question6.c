// write a program too print sum of two number (entered by the user).

#include <stdio.h>
int main()  
{

    int a,b,c;  // ye kahalate hai local variables  declartion

    printf("Please enter two Numbers");  // this print f used to give message to give msg to user to give direction to user 

    //  yaad rakna programming mejo line pahli likhi hoti hai vo line pahli chalti hai aur jo line baad melikhi hoti hai vo line baad me chalti hai 
    scanf("%d%d" ,&a,&b);  // jo number hame input karana hai uske liye ham scanf ka use karte hain , aur jo scanf me %d aayega usme comma nhi allowed hai balki space allowed hai . &a,&b operator ka use ham isliye karte hai taki, kis value ko kahaha ralkhna hai aur kaha nhi .
   
   
    c=a+b;  // jo bhi values aa gayi hai user ke enter karne karan , vo values add hongi aur jo result hai vo c me aa  jayega 

    printf("Sum of %d and %d is %d" , a,b,c);  // ab sum print karane ke liye ham last print f ka use kr rahe hai .
 
 



    

    printf("\n");
    return 0;

}
