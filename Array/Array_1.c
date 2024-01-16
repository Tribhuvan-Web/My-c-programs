// wap to input 10 number and print it.
#include <stdio.h>
int main()
{
    int A[10], i;
    for (i = 0; i < 10; i++)
    {
        printf("Input a no. \n");
        scanf("%d", &A[i]);
    }
    printf("Elements of A ");
    {
        for (i = 0; i < 10; i++)
            printf("%d", A[i]);
    }
}