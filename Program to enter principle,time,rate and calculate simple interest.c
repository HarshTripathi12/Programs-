//Program to enter principle,time,rate and calculate simple interest
#include<stdio.h>
#include<math.h>
int main ()
{
    float principle,time,rate,si;
    scanf("%f%f%f",&principle,&time,&rate);
    si=(principle*rate*time)*100;
    printf("Simple Interest is %.2f\n",si);
    return 0;
}