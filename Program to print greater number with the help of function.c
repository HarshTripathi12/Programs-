// Program to print greater number with the help of function
#include<stdio.h>
void greatestno(void)
{
    int x,y;
    printf("Enter the first no. ");
    scanf("%d",&x);
    printf("Enter the second no. ");
    scanf("%d",&y);
    if(x>y)
    {
        printf("First no. is greater\n");
    }
    else 
    {
        printf("second no. is greater\n");
    }
}
int main ()
{
    greatestno ();
    greatestno ();
    return 0;
}