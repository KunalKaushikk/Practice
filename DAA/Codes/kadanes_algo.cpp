#include <iostream> //bits/stdc++.h
using namespace std;
int max_subarr(int a[], int n)
{
    int rss = 0;
    int lss = 0;
    for (int i = 0; i < n; i++)
    {
        lss = lss + a[i];
        if (rss < lss)
            rss = lss;
        if (lss < 0)
            lss = 0;
    }
    return rss;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int a = sizeof(arr) / sizeof(arr[0]);

    int max_sum = max_subarr(arr, n);
    cout << "Maximum contiguous sum is " << max_sum;
    return 0;
}