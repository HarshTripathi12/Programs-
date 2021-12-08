/*Write a program to print Quotient and Remainder */
#include<stdio.h>
int main ()
{
    int x,y,rem,qu;
    scanf("%d%d",&x,&y);
    qu=x/y;
    rem=x%y;
    printf("%d\n",qu);
    printf("%d\n",rem);
    return 0;
}
    