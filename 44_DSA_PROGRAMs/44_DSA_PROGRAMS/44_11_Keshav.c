#include <stdio.h>
#include <stdlib.h>
#define n 5
int f = -1, r = -1;
int queue[n];

void enqueue(int x)
{
    if (r == n - 1)
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
        r++;
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
        f++;
    }
}

void display()
{
    if (f == -1 && r == -1)
    {
        printf("Queue is Empty\n");
    }

    else
    {
        for (int i = f; i <= r; i++)
        {
            printf("%d\n", queue[i]);
        }
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
            printf("Enqueued Sucessfully\n");
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