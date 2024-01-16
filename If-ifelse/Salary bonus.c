// W.A.P to input the employee salary and check if it is greater than 10,000 then
// give 40% bonus otherwise give 30% bonus
#include <stdio.h>
int main()
{
    int es, bon, ns;
    printf("What is the employee salary?");
    scanf("%d", &es);
    if (es > 10000)
    {
        bon = (es * 40)/ 100;
    }
    else
    {
        bon = (es * 30)/ 100;
    }
    ns = es + bon;
    printf("Your bonus is %d \n", bon);
    printf("Your net salary is %d \n", ns);
}