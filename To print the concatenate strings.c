// To print the concatenate strings 
#include<stdio.h>
int main ()
{
    int i,count=0,j;
    char x[100],y[100];
    gets (x);
    gets (y);
    for (i=0;x[i]!='\0';i++)
    {
        count++;
    }
    printf("Length of a word is %d\n",count);
    for (i=count,j=0;y[j]!='\0';i++,j++)
    {
        x[i]=y[j];
    }
    puts(x);
    return 0;
}