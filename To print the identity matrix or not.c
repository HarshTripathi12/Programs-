// To print the identity matrix or not 
#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter the value of row ");
    scanf("%d",&a);
    printf("Enter the value of column ");
    scanf("%d",&b);
    int i,j,x[a][b],c=1;
    for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            scanf("%d",&x[i][j]);
        }
    }
        for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
            printf("%d",x[i][j]);
        }
        printf("\n");
    }
        for (i=0;i<a;i++)
    {
        for (j=0;j<b;j++)
        {
     if (x[i][j]!=1 && x[j][i]!=0)
     {
        c=0;
     break;
        }
    }
    }
    if (c==1)
   {
       printf("It is the identity matrix\n");
    }
    else
    {
    printf("It is not the identity matrix\n");
    }
    return 0;
}