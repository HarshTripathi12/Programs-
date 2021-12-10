//Program to calculate area of equ. triangle

#include<stdio.h>
#include<math.h>
int main ()
{
    float side,area;
    scanf("%f",&side);
    area=sqrt(3.0)/4.0*side*side;
    printf("Area of equ. triangle is %f",area);
    return 0;
}