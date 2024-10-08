// what will be the value stored in the variable x after executing the following statement: x=3<0&&5>0;

//  what will be the value stored in the variable x after executing the following statement: x = 3<0&&5>0;


#include <stdio.h>
int main()
{
    int x;
    // printf("Enter the number ");
    // scanf("%d",&x);
    x = (3<0)&&(5>0);
    printf("The given expression solution is %d",x);
    printf("\n");
    return 0;
}