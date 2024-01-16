// Simple intrest calculator
#include<stdio.h>
int main(){
    int prin,rate,time,si;
    printf("What is the principal of the intrest? \n");
    scanf("%d",&prin);
    printf("What is the Rate of the intrest? \n");
    scanf("%d",&rate);
    printf("What is the Time of the intrest? \n");
    scanf("%d",&time);
    si = (prin*rate*time)/100;
    printf("The simple intrest is %d",si);
}