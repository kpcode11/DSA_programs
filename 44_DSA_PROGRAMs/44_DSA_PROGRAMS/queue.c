#include <stdio.h>
#include <stdlib.h>
#define n 5

int queue[n];
int f = -1, r = -1;

void enqueue(int x)
{
    if (r == n - 1)
    {
        printf("Queue is Full\n");
    }

    else if (f == -1 || r == -1)
    {
        f = 0;
        r = 0;
        queue[r] = x;
        printf("%d added\n\n", x);
    }

    else
    {
        r++;
        queue[r] = x;
        printf("%d added\n\n", x);
    }
}

void dequeue()
{
    if (f == -1 || r == -1)
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
        int a = queue[f];
        f++;
        printf("%d is removed from queue\n\n", a);
    }
}

void display()
{
    if (f == -1 || r == -1)
    {
        printf("Queue is Empty\n");
    }

    else
    {
        printf("Queue Elements are\n");
        for (int i = f; i <= r; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}

int main()
{
    int ch, n1;

    while (1)
    {
        printf("Queue Operations\n");
        printf("1. Enqueue Element\n");
        printf("2. Dequeue Element\n");
        printf("3. Display Elements\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the element you want to add: ");
            scanf("%d", &n1);

            enqueue(n1);
            break;

        case 2:
            dequeue();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Enter proper choice\n\n");
            break;
        }
    }

    return 0;
}