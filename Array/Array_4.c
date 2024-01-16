// wap to input 10 number in the array and find the sum of the elements , avearge,largest value
// and smallest value
#include <stdio.h>
int main()
{
    int i, A[10], avg = 0, max = 0, min = 0, sum = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter a no.");
        scanf("%d", &A[i]);
    }
    min = A[0];
    for (i = 0; i < 10; i++)
    {
        sum = sum + A[i];
        if (A[i] > max)
        {
            max = A[i];
        }
        if (A[i] < min)
        {
            min = A[i];
        }
    }
    avg = sum / 10;
    printf(" The sum of the array is %d \n", sum);
    printf(" The avg of the array is %d \n", avg);
    printf(" The max of the array is %d \n", max);
    printf(" The min of the array is %d", min);
}