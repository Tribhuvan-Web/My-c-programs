// Convert fahrenheit to celcius
#include<stdio.h>
int main(){
    float degree,calculator;
    printf("What is the fahrenheit?");
    scanf("%d",&degree);
    calculator = (degree - 32)/1.8;
    printf("The celcius of the given fahrenheit is %f",calculator);

}