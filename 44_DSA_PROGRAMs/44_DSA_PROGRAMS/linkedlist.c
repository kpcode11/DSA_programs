#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info;
    struct node *next;
};

struct node *list = NULL;

struct node *getnode(void)
{
    return (struct node *)malloc(sizeof(struct node));
}

void freenode(struct node *p)
{
    free(p);
}

void insertend(int x)
{
    struct node *temp, *newnode;

    newnode = getnode();
    newnode->info = x;
    newnode->next = NULL;
    temp = list;

    if (list == NULL)
    {
        list = newnode;
    }

    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

void display()
{
    struct node *print;
    print = list;

    if (list == NULL)
    {
        printf("Empty\n");
    }

    else
    {
        while (print->next != NULL)
        {
            printf("%d\n", print->info);
            print = print->next;
        }
        printf("%d\n", print->info);
    }
}

void deletebeg()
{

    struct node *temp;
    temp = list;
    if (list == NULL)
    {
        printf("Empty\n");
    }

    else
    {
        list = temp->next;
        freenode(temp);
    }
}

void insertbeg(int x)
{
    struct node *newnode;
    newnode = getnode();
    newnode->info = x;
    newnode->next = list;

    list = newnode;
}

int main()
{
    int ch, x;

    while (1)
    {
        printf("Linked list operations\n");
        printf("1. Insert Element from end\n");
        printf("2. Display Elements \n");
        printf("3. Delete Elements from beg\n");
        printf("4. Insert Element from beg\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            printf("Enter the number you want to add: ");
            scanf("%d", &x);
            insertend(x);
            break;

        case 2:
            display();
            break;

        case 3:
            deletebeg();
            break;

        case 4:
            printf("Enter the number you want to add: ");
            scanf("%d", &x);
            insertbeg(x);
            break;

        case 5:
            exit(0);
            break;

        default:
            printf("ERROR\n");
            break;
        }
    }

    return 0;
}