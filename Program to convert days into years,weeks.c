// Program to convert days into years,weeks
#include<stdio.h>
#include<math.h>
int main ()
{
    float days,weeks,months,years;
    scanf("%f",&days);
    weeks=days/7;
    months=days/30;
    years=days/365;
    printf("%f\n",weeks);
    printf("%f\n",months);
    printf("%f\n",years);
    return 0;
}