// Program of bubble shot 
#include<stdio.h>
int main ()
{
    int n,i,j;
    printf("Enter the size = ");
    scanf("%d",&n);
    int a[n],temp;
    for(i=0;i<n;i++)
    {
        printf("Enter the array ");
        scanf("%d",&a[i]);
    }
    for(i=0;i<(n-1);i++)
    {
        for(j=0;j<(n-1-i);j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;
}