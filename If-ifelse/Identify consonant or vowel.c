// W.a.p to input one character and check if it vowel or consonant Using switch statement. 
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter your letter to verify vowel or consonant \n");
    scanf("%c", &ch);
    switch (ch)
    {
    case 'a':
        printf("This is vowel");
        break;
    case 'A':
        printf("This is vowel");
        break;
    case 'e':
        printf("This is vowel");
        break;
    case 'E':
        printf("This is vowel");
        break;
    case 'i':
        printf("This is vowel");
        break;
    case 'I':
        printf("This is vowel");
        break;
    case 'o':
        printf("This is vowel");
        break;
    case 'O':
        printf("This is vowel");
        break;
    case 'u':
        printf("This is vowel");
        break;
    case 'U':
        printf("This is vowel");
        break;
    default:
        printf( "This is consonant");
        break;
    }
}