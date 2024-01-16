// Wap to input one character in small case and convert it into uppercase.
#include<stdio.h>
int main(){
    char a,b;
    printf("Enter a character");
    scanf("%s",&a);
    b=a-32;
    printf("%c",b);
}