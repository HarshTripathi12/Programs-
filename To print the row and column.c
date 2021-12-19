// To Print the row and column 
#include<stdio.h>
int main ()
{
    int a,b;
    printf("number of row");
    scanf("%d",&a);
    printf("number of column");
    scanf("%d",&b);
    int x[a][b],i,j;
    for(i=0;i<=a;i++)
    {
        for(j=0;j<=b;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<=a;i++)
    {
        for(j=0;j<=b;j++)
        {
            printf("%d",x[i][j]);
        }
        printf("\n");
    }
    return 0;
}