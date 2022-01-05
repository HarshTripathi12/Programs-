// To print the copy of the string with the help of Library (Overwrite) 
#include<stdio.h>
#include<string.h>
int main ()
{
    char x[100],y[100],len;
    gets (x);
    gets (y);
    strcpy (x,y);
    puts (x);
    puts (y);
    return 0;
}