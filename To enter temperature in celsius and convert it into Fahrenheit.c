// To enter temperature in celsius and convert it into Fahrenheit
#include<stdio.h>
#include<math.h>
int main ()
{
    float celsius,fahrenheit;
    scanf("%f",&celsius);
    fahrenheit=(celsius*(9.0/5.0)+32);
       printf("%f",fahrenheit);
    return 0;
}