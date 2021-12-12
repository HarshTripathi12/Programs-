//Program of Left shift for 63 multiplication 
#include<stdio.h>
int main ()
{
    int x,y;
    scanf("%d",&x);
    y=(x<<6)-x;
    printf("%d",y);
    return 0;
}