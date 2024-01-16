// Wap to print the size of char,float,int,double
#include<stdio.h>
int main(){
    int intType;
    float floatType;
    char charType;
    double doubleType;
    long longType;
    short shortType;
    printf("Size of int: %d \n",sizeof(intType));
    printf("Size of float: %d \n",sizeof(floatType));
    printf("Size of char: %d \n",sizeof(charType));
    printf("Size of double: %d \n",sizeof(doubleType));
    printf("Size of long: %d \n",sizeof(longType));
    printf("Size of short: %d \n",sizeof(shortType));
}