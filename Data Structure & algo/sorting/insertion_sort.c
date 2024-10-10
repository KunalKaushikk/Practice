#include <stdio.h>
int main()
{
    int i, j, count;
    int n;
    printf("Enter no of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Unsorted array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < n; i++)
    {
        j = i - 1;
        while (arr[i] < arr[j] && j >= 0)
        {
            count = arr[i];
            arr[i] = arr[j];
            arr[j] = count;
            j--;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}