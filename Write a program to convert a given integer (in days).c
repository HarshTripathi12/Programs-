//Write a program to convert a given integer (in days) to years,months and days assumes that all months have 30 days and all years have 365 days
#include<stdio.h>
#include<math.h>
int main ()
{
   float days,months,years;
   scanf("%f",&days);
   months=days/30;
   years=days/365;
   printf("%.3f Months\n",months);
   printf("%.3f years\n",years);
    return 0;
}