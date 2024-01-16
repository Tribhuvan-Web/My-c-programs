// wap to find the largest among 3.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three no \n");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
        if (a > c)
        {
            printf("The largest among these are %d", a);
        }
        else
            printf("The largest among these are %d", c);
    else if (b > c)
    {
        printf("The largest among these are %d", b);
    }
    else
        printf("The largest among these are %d", c);
}