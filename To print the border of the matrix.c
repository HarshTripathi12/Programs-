//To print the border of the matrix
#include<stdio.h>
int main ()
{
    int a,b;
    printf("Enter your row");
    scanf("%d",&a);
    printf("Enter your Column");
    scanf("%d",&b);
    int x[a][b],row,col;
    for(row=0;row<a;row++)
    {
        for(col=0;col<b;col++)
        {
            scanf("%d",&x[row][col]);
        }
    }
        for(row=0;row<a;row++)
    {
        for(col=0;col<b;col++)
        {
            if (row==0||col==0||row==2||col==2)
            {
                printf("%d",x[row][col]);
        }
        else 
        {
            printf(" ");
        }
        }
        printf("\n");
    }
    return 0;
}