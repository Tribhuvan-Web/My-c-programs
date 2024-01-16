 /* wap to print the series Using for loop 
0 2 6 12 20 ........*/
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter a no.\n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        /* code */
        printf("%d \n", (i*i)+i);
    }
}