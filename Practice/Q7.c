// wap to print the sequence of the series 1,4,9,16,25
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a no. \n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        printf("%d \n", (i * i));
    }
}