// wap to print 1 to 500 and also print their sum
#include <stdio.h>
int main()
{
    int i, sum = 0;
    for (i = 0; i <= 500; i++)
    {
        sum = sum + i;
        printf("%d \n", i);
    }
    printf("%d", sum);
}