//Program of switch statement to make calculate

#include<stdio.h>
int main ()
{
    int x,y,result;
    char choice;
    scanf("%d%c%d",&x,&choice,&y);
   switch (choice)
   {
       case '+':
       result=x+y;
       break;
       case '-':
       result=x-y;
       break;
       case '*':
       result=x*y;
       break;
       case '%':
       result=x/y;
       break;
   }
   printf("%d\n",result);
    return 0;
}