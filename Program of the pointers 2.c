// Program of the pointers 
#include<stdio.h>
int main ()
{
    int x=10,a;
    int *p;
    p=&x;
    printf("p is %d\n",p);
    a=*++p;
    printf("*p is %d\n",a);
    printf("p is %d\n",(p+1));
    return 0;
}