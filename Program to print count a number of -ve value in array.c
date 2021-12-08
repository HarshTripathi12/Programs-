//Program to print count a number of -ve value in array//
#include<stdio.h>
int main ()
{
    int x[5],i,a=0,b=0;
    for (i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        if (x[i]<0)
        a+=1;
        else
        b+=1;
    }
    printf("%d\n",a);
    printf("%d\n",b);
    return 0;
}
