#include <stdio.h>
int main()
{
    int i, n;
    int arr[20];
    int max = 0;
    int max_end = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        max_end += arr[i];
        if (max_end < 0)
        {
            max_end = 0;
        }
        if (max < max_end)
        {
            max = max_end;
        }
        if (arr[i] < 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (n < arr[i])
                {
                    n = arr[i];
                }
            }
        }
    }
    printf("%d", max);
}