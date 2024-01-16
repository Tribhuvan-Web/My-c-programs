// Wap to input a no and print the table
#include <stdio.h>
int main()
{
    int i, num;
    printf("Enter a no.");
    scanf("%d", &num);
    i = 1;
    do
    {
        printf("%d \n", (num * i));
        i++;
    } while (i <= 10);
}