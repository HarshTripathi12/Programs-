//Find the leap year or ordinary year
#include<stdio.h>
int main ()
{
    int year;
    scanf("%d",&year);
    (year%4==0)?printf("Leap year"):printf("Ordinary year");
    return 0;
}