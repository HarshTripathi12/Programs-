//The population of a city is 30,000. It increase by 20% during first year and 30% during the second year.Write a program to find the population after two years.
#include<stdio.h>
#include<math.h>
int main ()
{
    float x,y,z,a,b,total;
    scanf("%f%f%f",&x,&y,&z);
    a=(x*y)/100;
    printf("The population in first year %f\n",a);
    b=(x*z)/100;
    printf("The population in second year %f\n",b);
    total=a+b+x;
    printf("total population after two years %f\n",total);
    return 0;
}