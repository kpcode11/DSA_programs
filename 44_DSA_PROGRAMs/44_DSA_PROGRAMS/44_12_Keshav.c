#include <stdio.h>
#include <stdlib.h>
#define n 5
int f = -1, r = -1;
int queue[n];

void enqueue(int x)
{
    if (((r + 1) % n) == f)
    {
        printf("Queue is Full\n");
    }

    else if (f == -1 && r == -1)
    {
        f = 0;
        r = 0;
        queue[r] = x;
    }

    else
    {
        r = (r + 1) % n;
        queue[r] = x;
    }
}

void dequeue()
{
    if (f == -1 && r == -1)
    {
        printf("Queue is Empty\n");
    }

    else if (f == r)
    {
        f = -1;
        r = -1;
    }

    else
    {
        printf("%d is removed from queue\n", queue[f]);
        f = (f + 1) % n;
    }
}

void display()
{

    int i = f;
    if (f == -1 && r == -1)
    {
        printf("Queue is Empty\n");
    }

    else
    {
        while (i != r)
        {
            printf("%d\n", queue[i]);
            i = (i + 1) % n;
        }

        printf("%d\n", queue[r]);
    }
}

int main()
{
    int ch, num;
    while (1)
    {
        printf("Queue Operations\n");
        printf("1.Enqueue number\n");
        printf("2.Dequeue number\n");
        printf("3.Display numbers\n");
        printf("4.Exit\n");

        printf("Enter your choice: \n");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the number to be enqueue: \n");
            scanf("%d", &num);
            enqueue(num);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            printf("The numbers are:\n");
            display();
            break;

        case 4:
            exit(0);

        default:
            printf("Enter appropriate choice\n");
            break;
        }
    }

    return 0;
}