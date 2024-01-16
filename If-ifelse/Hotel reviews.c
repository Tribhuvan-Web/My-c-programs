#include<stdio.h>
int main(){
    int rate;
    printf("Enter your rating\n");
    scanf("%d",&rate);

    if(rate==1){
        printf("Well, we are sorry for the incconvience.\n");
    }
    else if (rate==2)
    {
        printf("Hope,Enjoyed our service.\n");
    }
    else if (rate==3)
    {
        printf("Tell us what you think.\n");
    }
    else if (rate==4)
    {
        printf("Good experience \n");
    }
    else{
        printf("Thanks for your 5 Star review. Hope you enjoyed our services.");
    }
}
// One liner if statement
// (a<5)? printf("A is less than 5"):printf("A is not less than 5");