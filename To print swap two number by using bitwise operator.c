// To print swap two number by using bitwise operator
#include<stdio.h>
int main ()
{
    int x,y;
    scanf("%d%d",&x,&y);
    x=x^y;
    y=x^y;
    x=y^x;
    printf("X=%d\n",x);
    printf("Y=%d\n",y);
    return 0;
}