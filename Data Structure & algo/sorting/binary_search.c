#include <stdio.h>
#define n ;
int bin(int arr[20], int first, int last, int mid);
int main()
{
    int i, n;
    printf("Enter number of elements in array : ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[n]);
    }
    int bin(int arr[n], int first, int last, int mid)
    {
        first = 0;
        last = n - 1;
        mid = (first + last) / 2;
    }

    int find;
    printf("Enter the value to search: ");
    scanf("%d", &find);
    if (arr[mid] == find)
    {
        printf("Element found at %d location", mid);
    }
    else if (arr[mid] > find)
    {
        mid =
    }
}