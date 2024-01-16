// wap to define a function which will not accept a number and print the table
#include <stdio.h>
void main()
{
    int num;
    printf("Enter a number \n");
    scanf("%d", &num);
    tableValue(num);
}
void tableValue(num)
{
    int i=1;
    while (i <= 10)
    {
        printf("%d \n",(i* num));
        i++;
    }
}
