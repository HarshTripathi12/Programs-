//Program to enter principle,time,rate and calculate Compound Interest
#include<stdio.h>
#include<math.h>
int main ()
{
    float principle,time,rate,CI;
    scanf("%f%f%f",&principle,&time,&rate);
    CI=principle*pow(1+(rate/100),time);
    printf("Compound Interest is %.2f\n",CI);
    return 0;
}