//Program to print which is negative or positive or zero//
#include <stdio.h>

int main()
{
    int x[5],i;
    for(i=0;i<5;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<5;i++)
    {
        if(x[i]<0)
        printf("%d negative\n",x[i]);
        else if (x[i]>0)
        printf("%d positive\n",x[i]);
        else
        printf("%d is zero\n",x[i]);
        
    }

    return 0;
}