#include<stdio.h>
int main ()
{
    int x[]={1,2,3,4,5};
    int *p;
    int sum = 0;
    int i;
    p=x;
    for (i=0;i<5;i++)
    {
        sum+=*p;
        p++;
    }
    printf("%d",sum);
    return 0;
}