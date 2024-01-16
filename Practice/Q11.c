// wap to check whether the no is prime or not.
#include <stdio.h>
int main()
{
    int n, i, factor = 0;
    printf("Enter a no. \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        if (n % i == 0)
            factor++;
    {
        if (factor == 2)
        {
            printf("It is a prime no");
        }
        else
        {
            printf("It is non prime no.");
        }
    }
}
