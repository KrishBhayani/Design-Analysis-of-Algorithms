#include <stdio.h>

int main()
{

    FILE *fp;
    int i, a[1001], j, temp;

    fp = fopen("worst(sort).txt", "r");

    for (i = 0; i < 1001; i++)
    {

        fscanf(fp, "%d", &a[i]);
    }

    for (i = 0; i < 1001; i++)
    {
        for (j = 0; j < 1001 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (i = 0; i < 1001; i++)
    {
        printf("%d\n", a[i]);
    }
}