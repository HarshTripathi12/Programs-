//Program to convert a given inter (in seconds) to hours,minutes and seconds. 
#include<stdio.h>
int main ()
{
   float sec,min,hour;
   scanf("%f",&sec);
   min=sec/60;
   hour=sec/3600;
   printf("Minutes is %f\n",min);
   printf("Hours is %f\n",hour);
    return 0;
}