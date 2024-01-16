// wap to input a number and find the sum of a digit,
// average,largest digit and smallest digit.
#include <stdio.h>
int main()
{
    int avg = 0, min = 9, max = 0, sum = 0, i, num, order, count = 0;
    printf("Enter a no \n");
    scanf("%d", &num);
    while (num > 0)
    {
        order = num % 10;
        sum = sum + order;
        if (order > max)
        {
            max = order;
        }
        if (order < min)
        {
            min = order;
            num = num / 10;
        }
        count++;
    }
    avg = sum / count;
    printf("The sum of the digit is %d \n", sum);
    printf("Average of the digit is %d \n", avg);
    printf("Largest digit in this value %d \n", max);
    printf("Smallest in this digit is  %d \n", min);
}