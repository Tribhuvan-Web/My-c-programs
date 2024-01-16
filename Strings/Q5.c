// wap to input one string in lowercase and print it in uppercase.
#include <stdio.h>
int main()
{
    char string[20], i;
    printf("Enter a word \n");
    gets(string);
    i = 0;
    while (string[i] != '\0')
    {
        if (string[i] >= 'a' && string[i] <= 'z')
        {
            string[i] = string[i] - 32;
            i++;
        }
    }
    printf("Uppercase word: %s", string);
}
