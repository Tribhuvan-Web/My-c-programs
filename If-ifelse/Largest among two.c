// W.A.P to input a number and print the largest value

#include <stdio.h>
int main()
{
    int a, b;
    printf("enter your number");
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        printf("A is greater.");
    }
    else
    {
        printf("B is greater.");
    }
}