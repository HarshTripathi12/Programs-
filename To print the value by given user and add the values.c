/* to print the value by given user and add the values */
#include<stdio.h>
int main ()
{
    int x[10],i,sum=0;
    for (i=0;i<=9;i++)
    {
        scanf("%d",&x[i]);
    sum+=x[i];
        
    }
        printf("%d",sum);
    return 0;
}