// wap to input 1st and 2nd term and print the fibonnaci series using for loop.
#include <stdio.h>
int main()
{
    int t1 = 0, t2 = 1, n, i,nextTerm;
    printf("Enter a no.");
    scanf("%d", &n);
        // printf("%d", t1, t2);
    for (i = 1; i <= n; i++)
    {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        printf("%d \n",t1,t2, nextTerm);
    }
}