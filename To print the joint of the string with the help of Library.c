// To print the joint of the string with the help of Library
#include<stdio.h>
#include<string.h>
int main ()
{
    char x[100],y[100],len;
    gets (x);
    gets (y);
    strcat (x,y);
    puts (x);
    puts (y);
    return 0;
}