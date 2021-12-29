// To print the reverse string  
#include<stdio.h>
int main ()
{
    int i,count=0;
    char x[100];
    fflush(stdin);
    gets (x);
    for (i=0;x[i]!='\0';i++)
    {
        count++;
    }
    printf("Length of a word is %d\n",count);
    for (i=count-1;i>=0;i--)
    {
        printf("%c",x[i]);
    }
    return 0;
}