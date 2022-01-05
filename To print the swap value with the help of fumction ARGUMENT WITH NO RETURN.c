// To print the swap value with the help of fumction "ARGUMENT WITH NO RETURN "
#include<stdio.h>
int main ()
{
    int x,y;
    scanf("%d%d",&x,&y);
    swap (x,y);
    scanf("%d%d",&x,&y);
    swap(x,y);
    return 0;
}
void swap (int a,int b)
{
    int z;
    z=a;
    a=b;
    b=z;
   printf("%d\n%d\n",a,b);
}