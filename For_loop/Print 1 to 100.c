// W.a.p to print 1 to 100 and also print their sum
#include <stdio.h>
int main()
{
    int sum = 0, i;
    for (i = 1; i <= 100; i++)
    {
        printf("%d \n", i);
        sum += i;
    }
    printf("The sum of 1 to 100 is %d", sum);
    return 0;
}