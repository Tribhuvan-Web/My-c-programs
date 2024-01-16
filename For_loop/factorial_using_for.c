// wap to input a no. print the factorial using for loop.
#include <stdio.h>
int main()
{
    int i, n, f = 1;
    printf("Enter a no. \n");
    scanf("%d", &n);
    {
        for (i = n; i >= 1; i--)
            f = f * i;
        {
            printf("%d", f);
        }
    }
}