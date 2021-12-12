//Find (x>y)&(x>z)
#include<stdio.h>
int main ()
{
    int x,y,z;
    scanf("%d%d%d",&x,&y,&z);
    (x>y&&x>z)?printf("X is greater"):(y>x&&y>z)?printf("Y is greater"):printf("Z is greater");
    return 0;
}