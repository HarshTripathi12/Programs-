//Raju got 6 and half apples from each of raghu,Sheenu and Akash. He wants to know how many apples he has in total without adding them. Write a program which could help Raju in doing this. 
#include<stdio.h>
#include<math.h>
int main ()
{
   float apples,total;
   printf("Enter the no. of apples Raju have");
   scanf("%f",&apples);
   total=3*apples;
   printf("Raju got %.2f apples from Sheenu,Raghu and Akash",total);
    return 0;
}