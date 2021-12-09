//To determine which number is even or not? 
#include <stdio.h>
int main()
{
   int x[5],i,even,odd;
   for(i=0;i<=4;i++)
   {
       scanf("%d",&x[i]);
    }
   for(i=0;i<=4;i++)
   {
       if (x[i]%2==0)
       printf("%d even\n",x[i]);
       else
       printf("%d odd\n",x[i]);
   }
   return 0;
}