// wap a swap two value
// using temporary variable
// #include <stdio.h>
// int main()
// {
//     double a, b, c;
//     printf("Enter first no \n");
//     scanf("%lf", &a);
//     printf("Enter second no \n");
//     scanf("%lf", &b);
//     c = a;
//     a = b;
//     b = c;
//     printf("%.3lf \n", a);
//     printf("%.3lf", b);
// }
// without using temporary variable
#include <stdio.h>
int main()
{
    double a, b;
    printf("Enter first no \n");
    scanf("%lf", &a);
    printf("Enter second no \n");
    scanf("%lf", &b);
    a=a-b;
    b=a+b;
    a=b-a;
    printf("%.3lf \n", a);
    printf("%.3lf", b);
}