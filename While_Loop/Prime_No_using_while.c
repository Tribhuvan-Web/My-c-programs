// Wap to check whether the input no is prime no or not
#include <stdio.h>
int main()
{
    int n, i, factor = 0;
    printf("Enter a no. \n");
    scanf("%d", &n);
    i = 1;
    while (i <= n)
    {
        if (n % i == 0)
            factor++;
        i++;
    }
    if (factor == 2)
    {
        printf("It is a prime no. \n");
    }
    else
        printf("It is not a prime no. \n");
}