// W.a.p to input the marks of three subjects and calculate obtained marks,percentage and division,
// Division is pass if students get minimum 40% marks and otherwise fail
#include<stdio.h>
int main(){
    int mat,phy,chem,tot;
    float per;
    printf("What is the marks of the physics? \n");
    scanf("%d",&phy); 
    printf("What is the marks of the Mathematics? \n");
    scanf("%d",&mat); 
    printf("What is the marks of the Chemistry? \n");
    scanf("%d",&chem);
    tot = mat+phy+chem;
    per = (tot/3);
    if (per>40)
    {
     printf("Yaay you are pass. \n");
    }
    else{
        printf("You failed. Try again.\n");
    }
    printf("Total percentage obtained by you is %f",per);
}