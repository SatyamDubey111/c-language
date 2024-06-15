// write a program to calculate average of three  integers. Numbers are given by the user .

#include <stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("Enter three numbers");
    scanf("%d%d%d",&a,&b,&c);
    avg = (a+b+c)/3.0;    // do integer  ke bich me opera tion karoge to result always integer aayega this is a rule 
    // maanlo a+b+c ka result 10 aa raha hai aur ham isse integer 3 se divide kare to result bhi 3 aayega na ki 3.333
    // isliye do interger ke bich me opreation karne pr result 3 hi aayega 
    // -> isse bachne ke liye 3.0 3 ke passshame 3.0 lagana padega that is real  consatant 
    printf("Average is %f" ,avg);
    printf("\n");
    return 0;

    //  0.2 , 0.1
}

