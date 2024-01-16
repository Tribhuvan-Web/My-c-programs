// wap to print the following series
#include <stdio.h>
int main()
{
    int i, j;
    i = 1;
    while (i <= 4)
    {
        j = 1;
        while (j <= i)
        {
            printf("%d", j);
            j++;
        }
        i++;
        printf(" \n");
    }
}