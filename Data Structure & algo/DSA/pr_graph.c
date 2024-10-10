#include <stdio.h>
int main()
{
    int a[10][10], i, j;
    int d[6];
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            scanf("%d", &a[i][j]);
        }
        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 6; j++)
            {
                if (a[i][j] == 1)
                {
                    d[i]++;
                }
            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            if (a[i][j] == 1)
            {
                d[i]++;
            }
        }
    }
    printf("%d", d[i]);
}
// for (i = 0; i < 6; i++)
// {
//     for (j = 0; j < 6; j++)
//     {

//     }
// }
