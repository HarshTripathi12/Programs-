// Program of to print the value x and y by using find by reference
#include<stdio.h>
void inc (int x,int y)
{
x++;
y++;
printf("%d%d",x,y);
}
int main ()
{
    int a=5;
    int b=6;
    printf("%d\n%d\n",a,b);
    void inc (a,b);
    printf("%d\n%d\n",a,b);
    return 0;
}