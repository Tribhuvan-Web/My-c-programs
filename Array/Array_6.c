// wap to input a number
//  and find the largest and the smallest digit.
#include <stdio.h>
int main()
{
    int num, order, max = 0, min = 9;
    printf("Enter an integer: \n");
    scanf("%d", &num);
    while (num > 0)
    {
        order = num % 10;
        if (order > max)
        {
            max = order;
        }
        if (order < min)
        {
            min = order;
        }
        num = num / 10;
    }
    printf("The largest digit is %d \n", max);
    printf("The smallest digit is %d", min);
}