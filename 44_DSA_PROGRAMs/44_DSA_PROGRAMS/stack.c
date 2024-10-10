#include <stdio.h>
#include <stdlib.h>
#define n 5

int stack[n];
int top = -1;

void push(int x)
{
    if (top == (n-1))
    {
        printf("Stack is Full !");
    }

    else
    {
        top++;
        stack[top] = x;
    }
}

void pop()
{

    if (top == -1)
    {
        printf("Stack is Empty\n");
    }

    else
    {
        int a = stack[top];
        top--;
        printf("%d is removed from stack\n\n", a);
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is Empty\n");
    }

    else
    {
        printf("Stack Elements are\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[i]);
        }
    }
}

int main()
{
    int ch, n1;

    while (1)
    {
        printf("Stack Operations\n");
        printf("1. Push Element\n");
        printf("2. Pop Element\n");
        printf("3. Display Elements\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the number you want to push: ");
            scanf("%d", &n1);

            push(n1);
            break;

        case 2:
            pop();
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