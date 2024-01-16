// Wap to sort an array in increasing order.
#include <stdio.h>
int main()
{
    int A[10], i, j, temp;
    for (i = 0; i < 10; i++)
    {
        printf("Enter a no: \n");
        scanf("%d", &A[i]);
    }
    printf("Elements of array: ");
    for (i = 0; i < 10; i++)
    {
        printf("%d", A[i]);
    }
    // For sorting
    for (i = 0; i < 10 - 1; i++)
        for (j = 0; i < 10 - 1 - i; i++)
            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j - 1] = temp;
            }
    printf("\n Sorted array");
    for (i = 0; i < 10; i++)
    {
        printf("%d", A[i]);
    }
}