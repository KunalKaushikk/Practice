#include <stdio.h>
int main()
{
    int a, i, x;
    int arr[6];
    for (i = 0; i < 6; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array is : ");
    for (i = 0; i < 6; i++)
    {
        printf(" %d ", arr[i]);
    }
    printf("Enter the element to find ");
    scanf("%d", &x);

    for (i = 0; i < 6; i++)
    {
        if (arr[i] == x)
        {
            printf(" %d \n", i);
        }
    }
}