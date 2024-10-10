#include <stdio.h>
#include <stdlib.h>
int n = 5;
int a[5];
int r = -1, f = -1;

void enqueue_rare()
{
    int x;
    printf("Enter an element");
    scanf("%d", &x);
    if (f == -1 && r == -1)
    {
        f = 0;
        r = 0;
        a[r] = x;
    }
    else if (f == (r + 1) % 5)
    {
        printf("Queue is full");
    }
    else
    {
        r = (r + 1) % 5;
        a[r] = x;
    }
}

void dequeue_front()
{
    if (f == -1 && r == -1)
    {
        printf("Empty queue");
    }
    else if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        printf("Element removed is %d", a[f]);
        f = (f + 1) % 5;
    }
}

void enqueue_front()
{
    int x;
    printf("Enter an element");
    scanf("%d", &x);
    if (f == -1 && r == -1)
    {
        f = 0;
        r = 0;
        a[r] = x;
    }
    else if (f == (r + 1) % 5)
    {
        printf("Queue is full");
    }
    else
    {
        f = (f - 1) % 5;
        a[f] = x;
    }
}

void dequeue_rare()
{
    if (f == -1 && r == -1)
    {
        printf("Empty queue");
    }
    else if (f == r)
    {
        f = -1;
        r = -1;
    }
    else
    {
        if (r == 0)
        {
            r = 4;
        }
        else
        {
            r--;
        }
    }
}

void display()
{
    if (f == -1 && r == -1)
    {
        printf("Empty queue");
    }
    else
    {
        int i;
        for (i = f; i != r; i = (i + 1) % 5)
        {
            printf("%d", a[i]);
        }
        printf("%d", a[r]);
    }
}

void main()
{
    int c;
    while (1)
    {
        printf("\nSelect what operation is to be performed on the queue:\n");
        printf(" 1.Enqueue in an element from rare.\n 2.Dequeue an element from front.\n 3.Enqueue an element from front.\n 4.Dequeue an element from rare.\n 5.Display Queue.\n 6.Exit.");
        scanf("%d", &c);
        switch (c)
        {
        case 1:
            enqueue_rare();
            break;
        case 2:
            dequeue_front();
            break;
        case 3:
            enqueue_front();
            break;
        case 4:
            dequeue_rare();
            break;
        case 5:
            display();
            break;
        case 6:
            exit(0);
            break;
        default:
            printf("Enter proper choice!");
        }
    }
}