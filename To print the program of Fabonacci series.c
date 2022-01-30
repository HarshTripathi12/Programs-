// To print the program of Fabonacci series 
#include<stdio.h>
int main ()
{
    int x=0,y=1;
    int sum=0,term,i;
    scanf("%d",&term);
    printf("%d,%d",x,y);
    for(i=1;i<=(term-3);i++)
    {
        sum=x+y;
        x=y;
        y=sum;
        printf(",%d",sum);
    }
    return 0;
}