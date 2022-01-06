// To print the odd/even with the help of function "ARGUMENT WITH NO RETURN"
#include<stdio.h>
int main ()
{
    int x;
    scanf("%d",&x);
    oddeven(x);
    return 0;
}
int oddeven (int a)
{
    if (a%2==0)
    {
        printf("even😊 ");
    }
    else
    {
        printf("odd😒");
    }
}