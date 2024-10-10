#include <stdio.h>
int main()
{
    int i, a, b, j;
    printf("Enter the number of elements in array: ");
    scanf("%d", &a);
    int arr[a];
    for (i = 0; i < a; i++)
    {
        printf("Enter element number %d : ", i);
        scanf("%d", &arr[i]);
    }
    for (i = 1; i < a; i++)
    {
        b = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > b)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = b;
    }
    printf("The sorted array is: \n");
    for (j = 0; j < a; j++)
    {
        printf("%d ", arr[j]);
    }
}