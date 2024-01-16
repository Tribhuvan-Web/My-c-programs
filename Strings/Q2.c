// wap to print all 256 characters and their ascii values
#include <stdio.h>
int main()
{
    int ch=0;
    while (ch <= 256)
    {
        printf("The ASCII Value of %c:%d \n", ch, ch);
        ch++;
    }

}