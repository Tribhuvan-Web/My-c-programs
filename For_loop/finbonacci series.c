// wap to print fibonacci series
#include <stdio.h>
int main()
{
    int n, i, t1 = 0, t2 = 1, nextTerm = t1 + t2;
    printf("Enter a no.");
    scanf("%d", &n);
    printf("%d%d", t1, t2);
    for (i = 3; i <= n; i++)
    {
        printf("%d \n", nextTerm);
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
    }
}