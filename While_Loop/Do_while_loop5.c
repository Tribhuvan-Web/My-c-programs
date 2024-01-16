// write a generic program to input a no and print the table
#include <stdio.h>
int main()
{
    int num, i;
    char ch;
    do
    {
        printf("Enter a no");
        scanf("%d", &num);
        for (i = 1; i <= 10; i++)
            printf("%d \n", num * i);
        printf("Do you want to continue program(y/n) \n");
        ch = getche();
    } while (ch == 'y');
}