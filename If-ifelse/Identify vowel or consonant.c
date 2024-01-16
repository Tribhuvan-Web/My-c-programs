// W.a.p to input one character and check if it vowel or consonant Using if statement.
#include <stdio.h>
int main()
{
    char letter;
    printf("Enter your letter \n");
    scanf("%c", &letter);
    if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u' || letter == 'A' || letter == 'E' || letter == 'I' || letter == 'O' || letter == 'U')
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is consonant");
    }
}