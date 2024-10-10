#include <stdio.h>

int comp(int arr1[], int arr2[], int num)
{
    int temp;

    for (int i = 0; i < num - 1; i++)
    {
        for (int j = 0; j < num - 1 - i; j++)
        {
            if (arr1[j] > arr1[j + 1])
            {
                temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }

            if (arr2[j] > arr2[j + 1])
            {
                temp = arr2[j];
                arr2[j] = arr2[j + 1];
                arr2[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < num; i++)
    {
        if (arr1[i] != arr2[i])
        {
            return 0;
        }

        else

        {
            return 1;
        }
    }
}

int main()
{
    int num;

    printf("Enter the size of array: ");
    scanf("%d", &num);

    int arr1[num];
    int arr2[num];

    printf("Enter the numbers in the array 1: \n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the numbers in the array 2: \n");
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr2[i]);
    }

    if (comp(arr1, arr2, num) == 1)
    {
        printf("Both the arrays are identical\n");
    }

    else
    {
        printf("Both the arrays are not identical\n");
    }

    return 0;
}