// Call by value 
#include<stdio.h>
void inc(int x,int y)
{
    x++;
    y++;
    printf("%d%d",x,y);
}
int main ()
{
    int a=5,b=6;
    printf ("%d\n%d\n",a,b);
    void inc(a,b);
    printf("%d\n%d\n",a,b);
    return 0;
}
