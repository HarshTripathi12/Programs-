// To Print the sum of diagonal 
#include<stdio.h>
int main ()
{
    int a,b;
    printf("number of row");
    scanf("%d",&a);
    printf("number of column");
    scanf("%d",&b);
    int x[a][b],i,j,sum=0;
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
            if (i==j)
        sum+=x[i][j];
        }
    }
        printf("%d\n",sum);
      //  printf("\n");
    return 0;
}