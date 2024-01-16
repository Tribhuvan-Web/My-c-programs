// wap to input 10no and print thir sum
#include <stdio.h>
int main()
{
    int A[10], i, sum = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter a number \n");
        scanf("%d", &A[i]);
    }
    printf("Sum of inputted value is ");
    {
        for (i = 0; i < 10; i++)
            sum = sum + A[i];
        printf("%d", sum);
    }
}