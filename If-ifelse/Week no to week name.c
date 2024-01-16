// W.a.p to enter the week no. and print week name
#include <stdio.h>
int main()
{
    int mon;
    printf("Enter week number \n");
    scanf("%d", &mon);
    switch (mon)
    {
    case 1:
        printf("Sunday");
        break;
    case 2:
        printf("Monday");
        break;
    case 3:
        printf("Tuesday");
        break;
    case 4:
        printf("Wednesday");
        break;
    case 5:
        printf("Thrusday");
        break;
    case 6:
        printf("Friday");
        break;
    case 7:
        printf("Saturday");
        break;
    default:
        printf("Enter a valid week number");
        break;
    }
}