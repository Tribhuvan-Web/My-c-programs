// Wap to print the following sequence and series
// 4321
// 432
// 43
// 4
#include <stdio.h>
int main()
{
    int j, i;
    for (i = 1; i <= 4; i++)
    {
        for (j = 4; j >= i; j--)
            printf("%d", j);
    printf(" \n");
    }
}