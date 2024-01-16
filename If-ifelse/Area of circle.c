#include <stdio.h>
int main()
{
    int radius, area;
    printf("Enter the radius of the circle");
    scanf("%d", &radius);
    area = radius * radius * 3.14;
    printf("The area of the circle is %d", area);
    return 0;
}