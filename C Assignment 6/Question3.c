// Write a program to take marks of 5 subject from the user . Assume marks are given out of 100 and passing marks is 33. Now display weather a candidate passed the examination or failed.

#include <stdio.h>
 
 int main()
 {
    int m1,m2,m3,m4,m5;
    printf("Enter a marks of five subject");
    
    scanf("%d%d%d%d%d", &m1,&m2,&m3,&m4,&m5);

    if(m1>=33 && m2>=33 && m3>=33 && m4>=33 && m5>= 33)

    printf("Result:Pass");
    else

    printf("Result:Fail");

    printf("\n");

    return 0;
 }