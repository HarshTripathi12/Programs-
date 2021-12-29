// To print multiplication of two matrix
#include<stdio.h>
int main ()
{
    int i,j,row1=3,row2=3,col1=3,col2=3,k;
    int x[row1][col1],y[row2][col2],z[row1][col1];
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&y[i][j]);
        }
    }
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            z[i][j]=0;
            for (k=0;k<col1;k++)
            {
                z[i][j]+=x[i][k]*y[k][j];
            }
        }
    }
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
{
            printf("%d\t",z[i][j]);
        }
        printf("\n");
  }
    return 0;
}