// wap to input 10no. and print the largest value
#include <stdio.h>
int main()
{
    int i, A[10], max = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter a no. \n");
        scanf("%d", &A[i]);
    }
    printf("The largest among these is ");
    {
    for (i = 0; i < 10; i++)
        if (A[i] > max)
            max = A[i];
    }
    printf("%d", max);
}