// To print the string and copy   
#include<stdio.h>
int main ()
{
    int i,count=0;
    char x[100],y[100];
    fflush(stdin);
    gets (x);
    for (i=0;x[i]!='\0';i++)
    {
        count++;
    }
    printf("Length of a word is %d\n",count);
    for (i=0;i<count;i++)
    {
        y[i]=x[i];
    }
    puts(y);
    return 0;
}