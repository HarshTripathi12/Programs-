#include<stdio.h>
int oddeven (void)
{
    int x;
    scanf("%d",&x);
    if (x%2==0)
    {
        printf("EVEN");
    }
    else
    {
    printf("ODD");
    }
}
int main ()
{
    oddeven();
    oddeven();
}