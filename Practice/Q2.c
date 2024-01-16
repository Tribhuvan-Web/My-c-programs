// wap to check the inputed number is prime.
#include <stdio.h>
int main()
{
    int n, i, ctr = 0;
    printf("Enter a no. \n");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
        if (n % i == 0)
        {
            ctr++;
        }
    if (ctr == 2)
    {
        printf("It is a prime no");
    }
    else
    {
        printf("It is not a prime no");
    }
	
}
