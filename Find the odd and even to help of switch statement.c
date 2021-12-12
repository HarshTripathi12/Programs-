//Find the odd and even to help of switch statement
#include<stdio.h>
int main ()
{
    int x;
    scanf("%d",&x);
   switch (x%2)
   {
       case 1:
       printf("odd");
       break;
       case 0:
       printf("even");
       break;
   }
    return 0;
}