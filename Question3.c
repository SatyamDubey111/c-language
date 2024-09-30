// Write a program with one char type variable . Assign 'A' in the variable. now change the value of variable  'A' to 'B' using increment operator.

#include <stdio.h>
int main()
{
    char a;
    printf("Entera character");
    scanf("%c",&a);
    a = 'A';
    a++;
    printf("%c",a);
    printf("\n");
    return 0;
    

}