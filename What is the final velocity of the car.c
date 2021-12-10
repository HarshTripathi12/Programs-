//A car travelling at 30m/s acceterates steadily at 5 m/s^2 for a distance of 70 m. What is the final velocity of the car? (Hint v^2=u^2+2*a*s).
#include<stdio.h>
#include<math.h>
int main ()
{
    float v,u,a,s;
    scanf("%f%f%f",&u,&a,&s);
    v=sqrt(pow(u,2)+2*a*s);
    printf("Velocity is %f",v);
    return 0;
}