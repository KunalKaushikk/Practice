#include <iostream>

using namespace std;
int croxum(int arr[], int low, int mid, int high)
{
    int n, rss, lss, sum = 0;
    lss = 0;
    for (int i = mid; i > low; i--)
    {
        sum += arr[i];
        if (sum > lss)
        {
            lss = sum;
        }
    }
    sum = 0;
    rss = 0;
    for (int i = mid + 1; i <= high; i++)
    {
        sum += arr[i];
        if (sum > rss)
        {
            rss = sum;
        }
    }
    return max(lss + rss, max(lss, rss));
}
int heighest_sum(int arr[], int low, int high)
{
    int mid = (low + high) / 2;
    if (low == high)
    {
        return (arr[low]);
    }
    return max(heighest_sum(arr, low, mid), max(heighest_sum(arr, mid + 1, high), croxum(arr, low, mid, high)));
}
int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int output = heighest_sum(ar, 0, n - 1);
    cout << output << endl;
    return 0;
}