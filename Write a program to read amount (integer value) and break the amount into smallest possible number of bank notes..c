//Write a program to read amount (integer value) and break the amount into smallest possible number of bank notes.
#include<stdio.h>
#include<math.h>
int main ()
{
   int a,b,c,d,e,f,g,h,i,notes;
   scanf("%d",&a);
   b=a/5;
   c=a/10;
   d=a/20;
   e=a/50;
   f=a/100;
   g=a/200;
   h=a/500;
   i=a/2000;
   printf("Notes of 5 is %d\n",b);
   printf("Notes of 10 is %d\n",c);
   printf("Notes of 20 is %d\n",d);
   printf("Notes of 50 is %d\n",e);
   printf("Notes of 100 is %d\n",f);
   printf("Notes of 200 is %d\n",g);
   printf("Notes of 500 is %d\n",h);
   printf("Notes of 2000 is %d\n",i);
    return 0;
}