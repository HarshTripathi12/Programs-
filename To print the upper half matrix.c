// To print the upper half matrix 
#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter the value of Row ");
    scanf("%d",&a);
    printf("Enter the value of column ");
    scanf("%d",&b);
    int i,j,x[a][b];
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
            if (i+j<3)
            {
            printf("%d",x[i][j]);
        }
        }
        printf("\n");
    }
    return 0;
}