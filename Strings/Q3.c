// Wap to print a to z and their ascii values
#include<stdio.h>
int main(){
    int ch=97;
    while (ch<123)
    {
        printf("The ASCII value of %c:%d \n",ch,ch);
        ch++;
    }
    
}