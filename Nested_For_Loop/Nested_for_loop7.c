// wap to print the following series
// 0
// 01
// 014
// 0149
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d", j * j);
        }
        printf("\n");
    }
}