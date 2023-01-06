#include <stdio.h>

int main()
{

    FILE *fp;
    int a[1001], n, i, x, j;
    fp = fopen("worst(sort).txt", "r");

    for (i = 0; i < 1001; i++)
    {

        fscanf(fp, "%d", &a[i]);
    }

    for (i = 1; i < 1001; i++)
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

    for (i = 0; i < 1001; i++)
    {
        printf("%d\n", a[i]);
    }
}