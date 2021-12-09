// To enter two numbers and perform all arithmertic operations
#include<stdio.h>
#include<math.h>
int main ()
{
    float add,substract,multiply,divide,x,y;
    scanf("%f%f",&x,&y);
    add=x+y;
    substract=x-y;
    multiply=x*y;
    divide=x/y;
    printf("%f\n",add);
    printf("%f\n",substract);
    printf("%f\n",multiply);
    printf("%f\n",divide);
    return 0;
}