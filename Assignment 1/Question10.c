// WAP to find the areaof circle . take radious of circle from the useras input and print the result in below given format.
// expected out format- "Area of circle A having radious R" Replace A wiyh the area and r with the radious .

#include <stdio.h>
int main()
{
    int r;
    float a;
    printf("Enter aradious of a circle");
    scanf("%d",&r); // agar hamne r variable float typ ka banaya hota to hame %d ki jagaha % likhna padta 
    a = 3.14*r*r;
    // printf("Area circle is %0.0f having the radius %d", a,r);
    printf("Area circle is %0.5f having the radius %d", a,r);
    printf("Area circle is %f having the radius %d", a,r);
    printf("\n");
    return 0; 
}  