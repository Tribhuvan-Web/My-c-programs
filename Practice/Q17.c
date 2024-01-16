// wap to find the roots of the equation
#include <math.h>
#include <stdio.h>
int main()
{
    double a, b, c, root1 = 0, root2 = 0, dis = 0, i;
    printf("Enter the value of the coefficient a,b,c: \n");
    scanf("%lf%lf%lf", &a, &b, &c);
    dis = (b * b) - (4 * a * c);
    i = sqrt(-dis) / 2 * a;
    printf("Discriminant=%.2lf \n", dis);
    // Conditions for real and different roots
    if (dis < 0)
    {
        root1 = -b + dis / 2 * a;
        root2 = -b - dis / 2 * a;
        printf("root1 = %.2lf and root2 =%.2lf", root1, root2);
    }
    // condtition for real and equal roots
    else if (dis == 0)
    {
        root1 = root2 = -b / 2 * a;
        printf("root1 = %.2lf and root2 =%.2lf", root1, root2);
    }
    // condition for real and imaginary roots
    else
    {
        root1 = (-b / 2 * a) + i * sqrt(-dis) / 2 * a;
        root2 = (-b / 2 * a) - i * sqrt(-dis) / 2 * a;
        printf("root1 = %.2lf and root2 =%.2lf", root1, root2);
    }
    return 0;
}
