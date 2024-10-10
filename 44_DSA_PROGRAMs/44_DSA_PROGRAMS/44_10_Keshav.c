#include <stdio.h>
#include <stdlib.h>

int stack[5];
int top = -1;

void push(int x)
{
    if (top == 4)
    {
        printf("Stack is Full\n");
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
        printf("%d popped out of the stack\n", a);
    }
}

void display()
{
    if (top == -1)
    {
        printf("Stack is empty\n");
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
        printf("\n----Stack Operation----\n");
        printf("1.Push the element into the stack\n");
        printf("2.Pop the elemtent out of the stack\n");
        printf("3.Display the elements of the stack\n");
        printf("4.Exit\n");

        printf("Enter the choice: ");
        scanf("%d", &ch);
        printf("\n");

        switch (ch)
        {
        case 1:
            printf("Enter the element to be pushed into the stack: ");
            scanf("%d", &n1);
            push(n1);
            printf("Element added !\n");
            break;

        case 2:
            pop();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
        default:
            printf("Enter a proper choice");
            break;
        }
    }
    return 0;
}