// To print the addition with the help of fumction "NO ARGUMENT WITH RETURN "
#include<stdio.h>
int sum ()
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=x+y;
    return z;
}
int main ()
{
    int sum1,sum2;
    sum1=sum();
    sum2=sum();
    printf("%d\n%d\n",sum1,sum2);
    return 0;
}