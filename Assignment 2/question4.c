// write aprogram to calculate volume of cuboid.

// cuboid yaani ki ghanaabh 
// volume of cuboid is = l*b*h
// isme hame do data type ki need nhi hai q ki yaha ek hi opreation perform ho raha hai multiply

#include <stdio.h>
int main()
{
    int l,b,h,v;
    printf("enter the value of length breadth and height");
    scanf("%d %d %d" , &l,&b,&h);
    v = l*b*h;
    printf("The volume of cuboid is %d" , v);
    printf("\n");
    return 0;

}