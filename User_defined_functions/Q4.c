// wap to define a function and print the radius of the circle
#include <stdio.h>
int area(int);
void main()
{
    int r, a;
    printf("Enter radius of the circle \n");
    scanf("%d", &r);
    a = area(r);
    printf("The area of the circle is %d", a);
}
int area(r)
{
    int a,areaOfTheCircle;
    areaOfTheCircle = 3.14*r*r;
    return areaOfTheCircle;
}