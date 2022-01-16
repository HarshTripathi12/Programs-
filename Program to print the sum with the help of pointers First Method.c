// Program to print the sum with the help of pointers First Method
#include<stdio.h>
int main ()
{
    int x,y,sum;
    int *p,*p1;
    scanf("%d%d",&x,&y);
    p=&x;
    p1=&y;
    sum=*p+*p1;
    printf("%d\n%d\n",p,p1);
    printf("%d",sum);
    return 0;
}