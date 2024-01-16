// Div pass or fail
#include <stdio.h>
int main()
{
    int sub1, sub2, sub3;
    float total;
    printf("Enter the Sub1 marks \n");
    scanf("%d", &sub1);
    printf("Enter the Sub2 marks \n");
    scanf("%d", &sub2);
    printf("Enter the Sub3 marks \n");
    scanf("%d", &sub3);
    total = (sub1 + sub2 + sub3) / 3;
    if ((total < 40) || sub1 < 33 || sub2 < 33 || sub3 < 33)
    {
        printf("Yor total percentage is %f and you are failed", total);
    }
    else
    {
        printf("Your total percentage is %f and you are pass", total);
    }
    return 0;
}