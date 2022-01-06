// To print the table with the help of function "ARGUMENT WITH NO RETURN"
#include<stdio.h>
int main ()
{
    int x,y;
    scanf("%d",&x);
    multi(x);
    scanf("%d",&y);
    multi(y);
    return 0;
}
void multi (int x, int y)
{
    int i;
    for (i=1;i<=10;i++)
    {
       printf("%d * %d = %d\n",x,i,(x*i)); 
    }
}