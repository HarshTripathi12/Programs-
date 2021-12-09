// To enter the radius and find area,diameter and circumference of circle
#include<stdio.h>
#include<math.h>
int main ()
{
    float radius,area,diameter,circumference;
    scanf("%f",&radius);
    diameter=2*radius;
    circumference=2*radius*3.14;
    area=3.14*radius*radius;
    printf("%f\n",diameter);
    printf("%f\n",circumference);
    printf("%f\n",area);
    return 0;
}