#include <stdio.h>

int main()
{
    int len, count = 0;

    printf("Enter the length of the array: \n");
    scanf("%d", &len);

    int arr1[len];

    printf("Enter the %d numbers: \n", len);
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < len; i++)
    {
        for (int j = i + 1; j < len; j++)
        {
            if (arr1[i] == arr1[j])
            {
                count++;
                break;
            }
        }
    }

    printf("Total duplicate elements: %d\n", count);

    return 0;
}