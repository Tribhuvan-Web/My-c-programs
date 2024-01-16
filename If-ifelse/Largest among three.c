// W.a.p to find largest number among 3.
#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter three number");
    scanf("%d%d%d", &a, &b, &c);
    if (a > b)
        if (b > c)
        {
            printf("%d", a);
        }
        else
        {
            printf("%d", c);
        }
    else if (b > c)
    {
        printf("%d", b);
    }
    else
    {
        printf("%d", c);
    }
}