// Program of Valentine Number
#include<stdio.h>
int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    if ((a+b)==(a^b))
    {
        printf("Valentine Number");
    }
    else 
    {
        printf("Non Valentine Number");
    }
    return 0;
}