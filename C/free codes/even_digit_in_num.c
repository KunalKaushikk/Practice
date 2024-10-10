// Incomplete Program
#include <stdio.h>
int main()
{
    int n, i, rem;
    int w;
    int count = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        w = arr[i];
        while (w != 0)
        {
            rem = w % 10;
            count++;
            w = w / 10;
        }
        if (count % 2 == 0)
        {
            printf("%d even\n", arr[i]);
        }
        else
        {
            printf("%d odd\n", arr[i]);
        }
    }
}
