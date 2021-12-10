//Program to enter Base and height of triangle. Find its area 

#include<stdio.h>
#include<math.h>
int main ()
{
    float area,h,b;
    scanf("%f%f",&h,&b);
    area=(h*b)/2;
    printf("Area of triangle is %f",area);
    return 0;
}