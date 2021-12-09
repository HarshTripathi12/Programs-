// To enter temperature in Fahrenheit and convert it into celsius
#include<stdio.h>
#include<math.h>
int main ()
{
    float celsius,fahrenheit;
    scanf("%f",&fahrenheit);
    celsius=((fahrenheit-32)*5.0/9.0);
       printf("%f",celsius);
    return 0;
}