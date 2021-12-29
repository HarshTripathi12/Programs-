// To print the string word given by user with the using of scanf 
#include<stdio.h>
int main ()
{
    char x[100];
    fflush(stdin);
    scanf("%[^\n]s",x);
    printf ("%s",x);
    return 0;
}