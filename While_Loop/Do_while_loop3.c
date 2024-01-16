// wap to input a no and print its factorial.
#include <stdio.h>
int main()
{
    int i, num, f = 1;
    printf("Enter a no.");
    scanf("%d", &num);
    i = num;
    do
    {
        f = f * i;
        i--;
    } while (i >= 1);
    printf("The factorial of the given no. is %d", f);
}