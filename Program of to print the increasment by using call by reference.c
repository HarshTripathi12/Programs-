// Program of to print the increasment by using call by reference
#include<stdio.h>
void ref (int *p,int *p1)
{
(*p)++;
(*p1)++;
}
int main ()
{
    int a=5;
    int b=6;
    printf("%d\n%d\n",a,b);
    ref(&a,&b);
    printf("%d\n%d\n",a,b);
    return 0;
}