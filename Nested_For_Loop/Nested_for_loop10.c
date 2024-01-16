// wap to print the following series
// *
// ***
// *****
// *******
#include<stdio.h>
int main(){
    int i,j;
    for ( i = 1; i <8; i+=2)
    {
        for ( j = 1; j <=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}