/* to find the sum odd and even value by using arrays */
#include<stdio.h>
int main ()
{
    int x[5],i,a=0,b=0;
    for (i=0;i<=4;i++)
    {
        scanf("%d",&x[i]);
    }
    //printf("%d",x[i]);
    for(i=0;i<=4;i++)
    {
    if (x[i]%2==0)
      a+=x[i];
    //    printf("even");
    
    else
        b+=x[i];
       // printf("odd");
    }
    printf("%d even \n%d odd",a,b);
    return 0;
}