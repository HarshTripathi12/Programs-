// To print the zig zag the matrix
#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter the value of row ");
    scanf("%d",&a);
    printf("Enter the value of column ");
    scanf("%d",&b);
    int i,j,x[a][b];
    for (i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
    for (i=0;i<a;i++)
    {
        if(i%2==0)
        {
            for (j=0;j<b;j++)
            {
                printf("%d",x[i][j]);
            }
        }
        else 
        {
            for (j=b-1;j>=0;j--)
            {
                printf("%d",x[i][j]);
            }
        }
        printf("\n");
    }
    return 0;
}