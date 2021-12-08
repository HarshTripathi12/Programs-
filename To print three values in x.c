/* to print three values in x */
#include<stdio.h>
int main ()
{
    int x[10],i;
    for (i=0;i<=9;i++)
    {
        scanf("%d",&x[i]);
    }
    for(i=0;i<=9;i++)
    {
        printf("%d",x[i]);
    }
    return 0;
}