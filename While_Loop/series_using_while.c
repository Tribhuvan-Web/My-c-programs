/*wap a program to print the sequence of the series using while loop.
0,1,4,9,16..........and so on*/
#include<stdio.h>
int main(){
    int n,i;
    printf("Enter a no. \n");
    scanf("%d",&n);
    i=0;
    while (i<=n)
    {
        printf("%d \n",i*i);
        i++;
        /* code */
    }
    
}