//Program to print the following line (assume the total value is contained in a variable named cost).The sales total is:$172.53.
#include<stdio.h>
#include<math.h>
int main ()
{
    float cost;
    printf("Enter the sales price");
    scanf("%f",&cost);
    printf("the sales total is $%.2f",cost);
    return 0;
}