// Program to print the reverse of array by using pointers 
#include<stdio.h>
int main ()
{
    int x[]={1,2,3,4,5};
    int *p;
    int sum=0;
    int i;
    p=x+4;
    for (i=5;i>0;i--)
    {
       // sum+=*p;
    //    p++;
     printf("%d\n",*p);
     p--;
    }
    return 0;
}