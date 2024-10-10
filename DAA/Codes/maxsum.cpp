#include <iostream>
using namespace std;
int xrosum(int arr[], int low, int mid, int high)
{
    int sum = 0;
    int lss = 0;
    for (int i = mid; i >= low; i--)
    {
        sum = sum + arr[i];
        if (sum > lss)
        {
            lss = sum;
        }
    }
    sum = 0;
    int rss = 0;
    for (int i = mid + 1; i <= high; i++)
    {
        sum = sum + arr[i];
        if (sum > rss)
            rss = sum;
    }
    return max(lss + rss, max(lss, rss));
}
int max_sum(int arr[], int low, int high)
{
    if (low == high)
    {
        return arr[low];
    }
    int mid = (low + high) / 2;
    return max(max_sum(arr, low, mid), max(max_sum(arr, mid + 1, high), xrosum(arr, low, mid, high)));
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int sum = max_sum(a, 0, n - 1);
    cout << sum << endl;
    return 0;
}