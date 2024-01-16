// wap to define a function and print the factorial
#include <stdio.h>
int fac(int);
 void main()
{
    int a, b;
    printf("Enter a no \n");
    scanf("%d", &a);
    b = fac(a);
    printf("%d", b);
}
int fac(a)
{
    int i, f;
    i = a;
    while (i >= 1)
    {
        f = f * i;
        i--;
    }
    return f;
}