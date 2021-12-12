//Find the odd and even number by using left shift
#include<stdio.h>
int main ()
{
    int x;
    scanf("%d",&x);
    x==(x>>1)<<1?printf("even"):printf("odd");
    return 0;
}