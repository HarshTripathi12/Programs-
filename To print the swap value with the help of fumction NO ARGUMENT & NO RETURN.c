// To print the swap value with the help of fumction "NO ARGUMENT & NO RETURN "
#include<stdio.h>
void swap (void)
{
    int x,y,z;
    scanf("%d%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("%d\n%d\n",x,y);
}
int main ()
{
    swap ();
    swap ();
    return 0;
}