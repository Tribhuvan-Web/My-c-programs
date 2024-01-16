// wap to input the number and print its factorial.
// using while loop
#include <stdio.h>
int main()
{
    int n, i, f = 1;
    printf("Enter a no. \n");
    scanf("%d", &n);
    i = n;
    while (i >= 1)
    {
        /* code */
        f = f * i;
        i--;
    }
    printf("%d", f);
}