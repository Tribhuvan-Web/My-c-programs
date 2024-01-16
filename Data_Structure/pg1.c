#include <stdio.h>
#include <stdlib.h>
#define N 10
int cq[N];
int f = -1;
int r = -1;
void push(int);
int pop();
void traverse();
int main()
{
    int item, delitem;
    int choice;
    while (1)
    {
        /* code */
        printf("_______________Circular queue operation______________ \n");
        printf("1. push element\n");
        printf("2. pop element\n");
        printf("3. traverse element\n");
        printf("4. exit program\n");
        printf("____________________\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1 /* constant-expression */:
            printf("Enter an item \n");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            delitem = pop();
            printf("Deleted item = %d \n", delitem);
            break;
        case 3:
            traverse();
            break;
        case 4:
            printf("End of program \n");
            exit(0);
        default:
            printf("Invalid choice \n");
            break;
        }
    }
}
void push(int item)
{
    if ((f == 0 && r == N - 1) || (f == r + 1))
    {
        printf("Cq overflow \n");
        return;
    }
    if (r == -1)
    {
        r = f = 0;
    }
    else if (r == N - 1)
    {
        r = 0;
    }
    else
    {
        r = r + 1;
    }
    cq[r] = item;
}
int pop()
{
    int delitem;
    if (f == -1)
    {
        printf("Cq empty \n");
        return 0;
    }
    delitem = cq[f];
    if (f == r)
    {
        f = r = -1;
    }
    else if (f == N - 1)
    {
        f = 0;
    }
    else
    {
        f = f + 1;
    }
    return delitem;
}
void traverse()
{
    int i;
    if (f == -1)
    {
        printf("Cq empty \n");
        return;
    }
    if (f <= r)
    {
        /* code */
        for (i = f; i <= r; i++)
        {
            printf("%d \n", cq[i]);
        }
    }
    else
    {
        for (i = f; i < N - 1; i++)
        {
            printf("%d \n", cq[i]);
        }
        for (i = 0; i <= r; i++)
        {
            /* code */
            printf("%d \n", cq[i]);
        }
    }
}
