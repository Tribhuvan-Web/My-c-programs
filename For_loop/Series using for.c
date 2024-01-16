/* wap to print the sequence series using for loop
 0,1,4,9,16...........and so on*/
#include <stdio.h>
int main()
{
    int i, n, fa;
    printf("Enter a value");
    scanf("%d",&n);
    for (i = 0; i<=n; i++)
        {
            /* code */
            printf("%d \n", i*i);
        }
}