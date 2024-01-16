// wap to input two numbers and print the addition,suubraction,multiplication,division and 
// define separate function for each
#include <stdio.h>
void calculate(int, int);
void main()
{
    int a, b;
    printf("Enter two numbers \n");
    scanf("%d%d", &a, &b);
    sum(a, b);
    sub(a, b);
    multi(a, b);
    div(a, b);
}
void sum(p, q)
{
    int r;
    r = p + q;
    printf("The addition of this number is %d \n", r);
}
void sub(p, q)
{
    int r;
    r = p - q;
    printf("The subtraction of this number is %d \n", r);
}
void multi(p, q)
{
    int r;
    r = p * q;
    printf("The multiplication of this number is %d \n", r);
}
void div(p, q)
{
    int r;
    r = p / q;
    printf("The division of this number is %d \n", r);
}