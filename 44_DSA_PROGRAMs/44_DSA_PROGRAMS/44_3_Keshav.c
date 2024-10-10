#include <stdio.h>

struct Student
{
    char name[100];
    int rollno;
    float percentage;
} st[5];

int compst(struct Student a, struct Student b)
{
    return a.rollno - b.rollno;
}

void sortst(struct Student st[])
{
    struct Student temp;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4 - i; j++)
        {
            if (compst(st[j], st[j + 1]) > 0)
            {
                temp = st[j];
                st[j] = st[j + 1];
                st[j + 1] = temp;
            }
        }
    }
}

int main()
{
    printf("Enter the details of 5 students: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the name of st[%d]: ", i + 1);
        scanf("%s", st[i].name);

        printf("Enter the Roll No of st[%d]: ", i + 1);
        scanf("%d", &st[i].rollno);

        printf("Enter the percentage of st[%d]: ", i + 1);
        scanf("%f", &st[i].percentage);
    }

    sortst(st);

    for (int i = 0; i < 5; i++)
    {
        printf("Name: %s\nRoll NO: %d\nPercentage: %f\n", st[i].name, st[i].rollno, st[i].percentage);
    }

    return 0;
}