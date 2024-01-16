// wap to enter two number and find its lcm
#include <stdio.h>
int main()
{
    int n1, n2, i, lcm = 0;
    printf("Enter a no. \n");
    scanf("%d", &n1);
    printf("Enter a no. \n");
    scanf("%d", &n2);
    for (i = 1; i < n2, n1; i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
            lcm = n1 * n2;
        printf("%d", lcm);
    }
}