// wap to input a no and check whether it is odd or even if it is odd then
// print the factorial otherwise table.
#include <stdio.h>
int main()
{
    int n, i, fac = 1;
    printf("Enter a no. \n");
    scanf("%d",&n);
    if (n % 2 == 1)
    {
        i = n;
        while (i >= 1)
        {
            fac = fac * i;
            i--;
        }
        printf("%d \n", fac);
    }
    else
    {
        i=1;
        while (i<=10)
        {
            printf("%d \n",(n*i));
            i++;
        }
        
    }
}
