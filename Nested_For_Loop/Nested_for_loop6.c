// wap to print the following series
// 1
// 23
// 456
// 78910
#include <stdio.h>
int main()
{
    int i, j, count = 1;
    for (i = 0; i <= 3; i++)
    {
        for ( j = 0; j <= i; j++)
        {
            printf("%d",count);
            count++;
        }
        printf("\n");
    }
}