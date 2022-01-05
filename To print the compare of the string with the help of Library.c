// To print the compare of the string with the help of Library
#include<stdio.h>
#include<string.h>
int main ()
{
    char x[100],y[100],len;
    gets (x);
    gets (y);
    if (strcmp (x,y)==0)
    printf("Equal String");
    else
    printf("Not Equal String");
    return 0;
}