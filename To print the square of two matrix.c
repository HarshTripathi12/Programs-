// To print the square of two matrix
#include<stdio.h>
int main ()
{
    int i,j,x[2][2],z[2][2];
    for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
        for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
        z[i][j]=x[i][j]*x[i][j];
        }
    }
        for (i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf(" %d ",z[i][j]);
        }
        printf("\n");
    }
    return 0;
}