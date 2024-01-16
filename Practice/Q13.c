// write a generic program to input a no and print the factorial.
#include <stdio.h>
int main()
{
    int num, i, f;
    char ch;
    do
    {
        f = 1;
        printf("Enter a no. \n");
        scanf("%d", &num);
        for (i = num; i >= 1; i--)
        {
            f = f * i;
            printf("%d", f);
            printf("Do you want to continue the program (y/n)");
            ch = getch();
        }
    } while (ch == 'y');
}