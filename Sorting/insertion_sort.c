#include <stdio.h>
int main()
{
    int a[10], n, i, x, j;

    for (i = 0; i < 10; i++)
    {
        printf("Enter Array Element : ");
        scanf("%d", &a[i]);
    }

    for (i = 1; i < 10; i++)
    {
        x = a[i];
        j = i - 1;

        while (x < a[j] && j >= 0)
        {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = x;
    }

    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }
}