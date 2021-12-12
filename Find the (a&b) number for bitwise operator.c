//Find the (a&b) number for bitwise operator
#include<stdio.h>
int main ()
{
    int x;
    scanf("%d",&x);
    x&1?printf("ODD"):printf("EVEN");
    return 0;
}