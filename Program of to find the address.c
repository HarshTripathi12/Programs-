//Program of to find the address 
#include<stdio.h>
int main ()
{
    int x,y,sum;
    int *p,*p1;
    printf("Enter the value of *p = ");
    scanf("%d",&x);
    printf("Enter the value of *p1 = ");
    scanf("%d",&y);
    p=&x;
    p=&y;
    printf("Address of p is %d\n",p);
    printf("Address of p1 is %d\n",p1);
    sum = *p+*p1;
    printf("Sum of p is %d",sum);
    return 0;
}