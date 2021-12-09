// To enter length in cm and convert it into meter and kilometer.
#include<stdio.h>
#include<math.h>
int main ()
{
    float a,meter,kilometer;
    scanf("%f",&a);
    //printf("%f",a);
    meter=a/100;
    kilometer=a/100000;
    printf("Your value is %f in meter\n",meter);
    printf("Yourvalue is %f in kilometer",kilometer);
    return 0;
}