#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int arr[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &arr[i]);
    }
    int k = arr[0];
    for (int i = 0; i < x; i++)
    {
        if (k < arr[i])
        {
            k = arr[i];
        }
    }
    printf("%d", k);
}