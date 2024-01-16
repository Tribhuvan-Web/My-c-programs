// wap to input a number and print the table and also print their sum
#include <stdio.h>
int main()
{
    int n, sum = 0, i = 1;
    printf("Enter a number");
    scanf("%d", &n);
    while (i <= 10)
    {
        printf("%d \n", n * i);
        sum = sum + (n*i);
        i++;
    }
    printf("%d", sum);
}