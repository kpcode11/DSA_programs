#include <stdio.h>

int main()
{
    int n;

    printf("Enter the size of array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements in array\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Unique Elements are\n");
    for (int i = 0; i < n; i++)
    {
        int isunique = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j && a[i] == a[j])
            {
                isunique = 0;
                break;
            }
        }

        if (isunique)
        {
            printf("%d\n", a[i]);
        }
    }

    return 0;
}