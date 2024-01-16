// wap to input a no and thee print the table to that no.
#include <stdio.h>
int main()
{
    int j, i, num = 0;
    printf("Enter a no. \n");
    scanf("%d", &num);
    for (i = 1; i <=num; i++)
        for (j = 1; j <= 10; j++)
        {
            printf("%d", (i * j));
            printf("\n");
        }
} 