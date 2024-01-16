// wap to input a no and check whether it is perfect number or not.
#include <stdio.h>
int main()
{
    int n, i, sum = 0;
    printf("Enter a no.");
    scanf("%d", &n);
    i = 1;
    while (i < n)
    {
        if (n % i == 0)
            sum = sum + i;
        i++;
        {
            if (sum == n)
            {
                printf("It is a perfect no.");
            }
            else
                printf("It is not a perfect no.");
        }
    }
}