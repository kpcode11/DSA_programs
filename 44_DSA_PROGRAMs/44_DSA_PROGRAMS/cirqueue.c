#include <stdio.h>
#include <stdlib.h>
#define n 5

int cir[5];
int f = -1, r = -1;

void enqueue(int x)
{
    if ((r + 1) % n == f)
    {
        printf("Queue is Full\n\n");
    }

    else if (f == -1 || r == -1)
    {
        f = 0;
        r = 0;
        cir[r] = x;
        printf("%d added\n\n", x);
    }

    else
    {
        r = (r + 1) % n;
        cir[r] = x;
        printf("%d added\n\n", x);
    }
}

void dequeue()
{
    if (f == -1 || r == -1)
    {
        printf("Queue is Empty\n\n");
    }

    else if (f == r)
    {
        f = -1;
        r = -1;
    }

    else
    {
        int a = cir[f];
        printf("%d is removed from queue\n\n", a);
        f = (f + 1) % n;
    }
}

void display()
{
    int i = f;
    if (f == -1 || r == -1)
    {
        printf("Queue is Empty\n\n");
    }

    else
    {
        while (i != r)
        {
            printf("%d\n", cir[i]);
            i = (i + 1) % n;
        }
        printf("%d\n", cir[r]);
    }
}

int main()
{
    int ch, n1;

    while (1)
    {
        printf("Circular Queue Operations\n");
        printf("1. Enqueue Element\n");
        printf("2. Dequeue Element\n");
        printf("3. Display Element\n");
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