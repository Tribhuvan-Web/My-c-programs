// W.A.P to input the product rate and check if it is greater than or equal to 2000, 
// Give 20 % discount, Otherwise give 10% discount. print the value of net price.
#include<stdio.h>
int main(){
    int pr,dis,np;
    printf("Enter the product rate.");
    scanf("%d",&pr);
    if (pr>=2000)
    {
    dis = (pr*20)/100;
    }
    else{
        dis = (pr*10)/100;
    }
    np = pr - dis;
    printf("Discount %d \n",dis);
    printf("Net price %d \n",np);
}