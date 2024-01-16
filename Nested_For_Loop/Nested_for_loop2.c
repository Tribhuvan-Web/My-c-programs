// wap to print the following series
// 1234
// 123
// 12
// 1
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 4; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}