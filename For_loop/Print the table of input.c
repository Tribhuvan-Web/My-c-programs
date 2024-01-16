// w.a.p to input a number and print the table 
// Using while loop
#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter a no.\n");
    scanf("%d",&n);
    while (i<=10)
    {
        printf("%d \n",(n*i));
        i++;
    }
    
}