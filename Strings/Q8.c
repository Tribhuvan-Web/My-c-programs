// wap to concatinate two strings without using strcat();
#include<stdio.h>
int main(){
    char a[10],b[10];
    printf("Enter your Firstname: \n");
    gets(a);
    printf("Enter your secondname: \n");
    gets(b);
    printf("%s%s",a,b);
}