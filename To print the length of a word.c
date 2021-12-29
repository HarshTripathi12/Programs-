// To print the length of a word 
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
    printf("Length of a word is %d",count);
    return 0;
}