// Program to print the base address of the array second row and value of x[row],x[column]
#include<stdio.h>
int main ()
{
    int x[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    printf("%d\n",x);
    printf("%d\n",(x+1));
    printf("%d\n",*(x+1));
    printf("%d\n",*(*(x+1)));
    printf("%d\n",*(*(x+1)+1));
    return 0;
}