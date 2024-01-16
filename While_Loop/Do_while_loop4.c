// wap to input 1st and 2nd term and print the fibonacci series and upto n terms
#include <stdio.h>
int main()
{
    int n, i, t1 = 0, t2 = 1, t3;
    printf("Enter first and second term");
    scanf("%d%d", &t1, &t2);
    printf("Enter the value of n");
    scanf("%d", &n);
    printf("%d%d \n", t1, t2);
    i = 1;
    do
    {
        t3 = t1 + t2;
        printf("%d \n", t3);
        t1 = t2;
        t2 = t3;
        i++;
    } while (i <= n - 2);
}