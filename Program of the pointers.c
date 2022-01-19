// Program of the pointers 
#include<stdio.h>
int main ()
{
    int x=10;
    int *p;
    p=&x;
    printf("p is %d\n",p);
    printf("p+1 is %d\n",(p+1));
    printf("p+2 is %d\n",(p+2));
    printf("p-3 is %d\n",(p-3));
    printf("p-4 is %d\n",(p-4));
    return 0;
}