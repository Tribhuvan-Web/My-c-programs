// wap to print the following series
// 4
// 43
// 432
// 4321
#include<stdio.h>
int main(){
    int i,j;
    for ( i = 4; i >=1; i--)
    {
        for ( j = 4; j >=i; j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
}