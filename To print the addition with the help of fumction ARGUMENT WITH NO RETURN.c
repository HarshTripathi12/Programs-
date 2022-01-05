// To print the addition with the help of fumction "ARGUMENT WITH NO RETURN "
#include<stdio.h>
int main ()
{
    int x,y;
    scanf("%d%d",&x,&y);
    sum (x,y);
    scanf("%d%d",&x,&y);
    sum (x,y);
    return 0;
}
void sum (int a,int b)
{
    int z;
    z=a+b;
   printf("%d\n",z);
}
