/* wap to print this sequence using while
0 2 6 12 20........... */
#include <stdio.h>
int main()
{
    int n, i;
    printf("Enter a no. \n");
    scanf("%d", &n);
    i = 0;
    while (i <= n)
    {
        /* code */
        printf("%d \n",(i * i) + i);
        i++;
    }
}