#include <stdio.h>
int n;
int bin_search_iterative(int arr[n], int front, int end, int element)
{
    while (front <= end)
    {
        int middle = front + (end - front) / 2;
        if (arr[middle] == element)
            return middle;
        if (arr[middle] < element)
            front = middle + 1;
        else
            end = middle - 1;
    }
    return -1;
}
int main(void)
{
    int arr[n];
    int n = scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int element = scanf("%d", &element);
    int index = bin_search_iterative(arr, 0, n - 1, element);
    if (index == -1)
    {
        printf("Element not found in the array ");
    }
    else
    {
        printf("Element found at index : %d", index);
    }
    return 0;
}