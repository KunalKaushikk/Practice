#include <stdio.h>
int main()
{
    int i, j, arr[25], count, temp;
    scanf("%d", &count);
    for (i = 0; i < count; i++)
    {
        scanf("%d", arr[i]);
    }
    for (i = 1; i < count; i++)
    {
        temp = arr[i];
        j = i - 1;
        while ((temp < arr[j]) && (j >= 0))
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = temp;
    }
    for (i = 0; i < count; i++)
    {
        printf("%d", arr[i]);
    }
    return 0;
}