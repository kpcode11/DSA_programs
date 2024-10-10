#include <stdio.h>
#include <stdlib.h>
#define n 5

int deq[n];
int f = -1, r = -1;

void enqueuer(int x)
{
    if ((f == 0 && r == n - 1) || (f == r + 1))
    {
        printf("Queue is Full\n\n");
    }

    else if (f == -1 && r == -1)
    {
        f = 0;
        r = 0;
        deq[r] = x;
    }

    else if (r == n - 1)
    {
        r = 0;
        deq[r] = x;
    }

    else
    {
        r++;
        deq[r] = x;
    }
}

void enqueuefr(int x)
{
    if ((f == 0 && r == n - 1) || (f == r + 1))
    {
        printf("Queue is Full\n\n");
    }

    else if (f == -1 && r == -1)
    {
        f = 0;
        r = 0;
        deq[f] = x;
    }

    else if (f == 0)
    {
        f = n - 1;
        deq[f] = x;
    }

    else
    {
        f--;
        deq[f] = x;
    }
}

void dequeuefr()
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

    else if (f == n - 1)
    {
        printf("%d is removed", deq[f]);
        f = 0;
    }

    else
    {
        printf("%d is removed", deq[f]);
        f++;
    }
}

void dequeuer()
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

    else if (r == 0)
    {
        printf("%d is removed", deq[r]);
        r = n - 1;
    }

    else
    {
        printf("%d is removed", deq[r]);
        r--;
    }
}

void display()
{
    int i = f;

    while (i != r)
    {
        int a = deq[i];
        printf("%d\n", a);
        i = (i + 1) % n;
    }
    printf("%d\n", deq[r]);
}

int main()
{
    int ch, n1;

    while (1)
    {
        printf("Dequeue Operations\n");
        printf("1. Enqueue Element from rear\n");
        printf("2. Enqueue Element from front\n");
        printf("3. Dequeue Element from front\n");
        printf("4. Dequeue Element from rear\n");
        printf("5. Display the Elements\n");
        printf("6. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the number you want to add: ");
            scanf("%d", &n1);
            enqueuer(n1);
            break;

        case 2:
            printf("Enter the number you want to add: ");
            scanf("%d", &n1);
            enqueuefr(n1);
            break;

        case 3:
            dequeuefr();
            break;

        case 4:
            dequeuer();
            break;

        case 5:
            display();
            break;

        case 6:
            exit(0);
            break;

        default:
            printf("Enter proper choice !\n\n");
            break;
        }
    }

    return 0;
}