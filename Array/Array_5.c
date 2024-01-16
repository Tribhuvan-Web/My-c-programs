// Wap to input the number and reverse the digit
#include <stdio.h>
int main()
{
    int num, rev = 0, order;
    printf("Enter a no: \n");
    scanf("%d", &num);
    while (num > 0)
    {
        order = num % 10;
        rev = (rev * 10) + order;
        num = num / 10;
    }
    printf("%d", rev);
}