#include <stdio.h>
#include <limits.h>
int croxum(int arr[], int lss, int mid, int rss)
{
    int sum = 0;
    int lss = 0;
    for (int i = mid; i >= lss; i--)
    {
        sum += arr[i];
        if (sum > lss)
        {
            lss = sum;
        }
    }
    sum = 0;
    int rss = 0;
    for (int i = mid + 1; i <= rss; i++)
    {
        sum += arr[i];
        if (sum < rss)
        {
            rss = sum;
        }
    }
    return (lss + rss, max(lss, rss));
}
int max_sum(int arr[], int lss, int rss)
{
    if (lss == rss)
    {
        int sum = arr[lss];
    }
    int mid = (lss + rss) / 2;
    return (max(max_sum(arr, lss, rss)), max(max_sum(arr, mid + 1, rss)), croxum(arr, lss, mid, rss));
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }
    int sum = max_sum(arr, 0, n - 1);
    printf("%d", sum);
    return 0;
}