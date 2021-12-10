//Program to enter five subjects marks & find total,average,percentage

#include<stdio.h>
#include<math.h>
int main ()
{
    float a,b,c,d,e,total,average,percentage;
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    printf("Total is %f\n",total);
    average=total/5;
    printf("Average is %f\n",average);
    percentage=(total/500)*100;
    printf("Percentage is %f\n",percentage);
    return 0;
}