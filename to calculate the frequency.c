//Write a program to calculate the frequency of a given wave with wavelength and speed where speed=wavelength*frequency
#include<stdio.h>
#include<math.h>
int main ()
{
    float speed,wavelength,frequency;
    scanf("%f%f",&wavelength,&frequency);
    speed=wavelength*frequency;
    printf("Speed is %.2f",speed);
    return 0;
}