#include <stdio.h>
int main()
{
    int n;
    int prod = 1;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        prod *= arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == prod / arr[i])
        {
            printf("Partition from %d is true\n", i);
        }
        else
            printf("Partition from %d is False\n", i);
    }
}