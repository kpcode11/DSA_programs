#include <stdio.h>

int isfibo(int num)
{
    int t1 = 0, t2 = 1, nterm;

    if (num == t1 || num == 0)
    {
        return 1;
    }

    while (nterm <= num)
    {
        nterm = t1 + t2;
        if (nterm == num)
        {
            return 1;
            t1 = t2;
            t2 = nterm;
        }
        return 0;
    }
}

int main()
{
    int num;

    printf("Enter the num: ");
    scanf("%d", &num);

    if (isfibo(num)==1)
    {
        printf("%d is a fibonaci number", num);
    }

    else
    {
        printf("%d is not a fibonaci number", num);
    }
    return 0;
}