// write a program to print the following series
// *
// **
// ***
// ****
#include<stdio.h>
int main(){
    int i,j;
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j <=i; j++)
        {
            /* code */
            printf("*");
        }
        printf("\n");
    }
    
}