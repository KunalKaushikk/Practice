#include <stdio.h>
int main()
{
    int a[10][10], i, j;
    int d0 = 0, d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0;
    for (i = 0; i < 6; ++i)
    {
        for (j = 0; j < 6; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < 6; ++i)
    {
        for (j = 0; j < 6; ++j)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (a[i][j] == 1)
            {
                d0++;
            }
        }
    }
    printf("d0 is %d \n", d0);
    for (i = 1; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (a[i][j] == 1)
            {
                d1++;
            }
        }
    }
    printf("d1 is %d\n", d1);
    for (i = 2; i < 3; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (a[i][j] == 1)
            {
                d2++;
            }
        }
    }
    printf("d2 is %d\n", d2);
    for (i = 3; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (a[i][j] == 1)
            {
                d3++;
            }
        }
    }
    printf("d3 is %d\n", d3);
    for (i = 4; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (a[i][j] == 1)
            {
                d4++;
            }
        }
    }
    printf("d4 is %d\n", d4);
    for (i = 5; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (a[i][j] == 1)
            {
                d5++;
            }
        }
    }
    printf("d5 is %d", d5);
}