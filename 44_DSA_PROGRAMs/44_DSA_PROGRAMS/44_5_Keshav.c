#include <stdio.h>

int main()
{
    int n;

    printf("Enter the value for n: ");
    scanf("%d", &n);

    int num[n],max;

    printf("Enter the %d numbers\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    max = num[0];

    for (int i = 0; i < n; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
    }

    printf("Biggest number in the array is %d", max);

    return 0;
}