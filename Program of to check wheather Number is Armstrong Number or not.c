// Program of to check wheather Number is Armstrong Number or not
#include<stdio.h>
int main ()
{
    int a,b,x,rev,num;
    scanf("%d",&x);
    num=x;
    a=x%10;
    x=x/10;
    b=x%10;
    x=x/10;
    rev=x*x*x+b*b*b+a*a*a;
    if (rev==num)
    {
        printf("Armstrong Number");
    }
    else 
    {
        printf("Not Armstrong Number");
    }
    return 0;
}