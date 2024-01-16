// wap to check whether the input number is positive or negative
#include <stdio.h>
int main()
{
    double a;
    printf("Enter a no \n");
    scanf("%lf", &a);
    if (a > 0)
    {
        printf("inputted number: %.1lf and it is positive", a);
    }
    else if (a == 0)
    {
    }
    else
    {
        printf("inputted number: %.1lf and  is negative", a);
    }
}