/*A horse accelerates steadily from rest at 4 m/s^2 for 3 second. 
(a). What is its final Velocity?[Hint v=u+at]
(b). How far has it travelled?[Hint s=ut+1/2at^2]*/
#include<stdio.h>
#include<math.h>
int main ()
{
    float v,u,a,t,s;
    scanf("%f%f%f",&u,&a,&t);
    v=u+a*t;
   s=u*t+(1.0/2.0)*a*pow(t,2);
    printf("Velocity is %f\n",v);
   printf("it's far has travelled %f",s);
    return 0;
}