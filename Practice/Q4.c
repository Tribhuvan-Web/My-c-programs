// wap to print all odd numbers from 1 to 200 and also their sum.
#include <stdio.h>
int main()
{
    int i, d, sum = 0;
    for (i = 1; i <= 200; i = i + 2)
    {
        sum = sum + i;
        printf("%d \n", i);
    }
    printf("%d", sum);
}