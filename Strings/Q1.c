// Wap to input a character and print the ASCII value
#include <stdio.h>
int main()
{
    char character;
    printf("Enter a character \n");
    scanf("%s", &character);
    printf("The ASCII value of character is %c : %d",character,character);
}