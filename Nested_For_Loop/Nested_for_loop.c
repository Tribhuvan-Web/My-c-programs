// wap to print the series  using nested for loop
// 1
// 12
// 123
// 1234
#include <stdio.h>
int main()
{
    int i, j;
    for (i = 1; i <= 40; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d",j);
        }
            printf(" \n");
    }
}