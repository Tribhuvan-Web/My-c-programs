// Wap to enter a no and print their table.
#include <stdio.h>
int main()
{
    int i, n, tab = 0;
    printf("Enter a no. \n");
    scanf("%d", &n);
    for (i = 1; i <= 10; i++)
    {
        tab = n * i;
        printf("%d \n", tab);
    }
}