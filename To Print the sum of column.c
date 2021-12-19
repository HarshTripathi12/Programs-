// To Print the sum of column
#include<stdio.h>
int main ()
{
    int a,b;
    printf("number of row");
    scanf("%d",&a);
    printf("number of column");
    scanf("%d",&b);
    int x[a][b],i,j,sum=0;
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            sum+=x[j][i];
        }
        printf("%d",sum);
        sum=0;
    }
    return 0;
}