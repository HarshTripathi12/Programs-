// To print Area of Triangle by using Heron's Formula 
#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,s,area;
    scanf("%f%f%f",&a,&b,&c);
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f",area);
    return 0;
}