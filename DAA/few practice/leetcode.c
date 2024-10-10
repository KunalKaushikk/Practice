#include <stdio.h>
int main()
{
    int arr[10];
    int sum;
    printf("Enter no of elements in array: ");
    int n;
    int out1 = -1;
    int out2 = -1;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter sum");
    scanf("%d", &sum);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[i] + arr[j] == sum)
            {
                if (i != j)
                {
                    out1 = i + 1;
                    out2 = j + 1;
                    break;
                }
            }
        }
    }
    printf("%d %d", out1, out2);
}