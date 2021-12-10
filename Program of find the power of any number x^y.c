//Program of find the power of any number x^y
#include<stdio.h>
#include<math.h>
int main ()
{
    float x,y,z;
    scanf("%f%f",&x,&y);
    z=pow(x,y);
    printf("%f",z);
    return 0;
}