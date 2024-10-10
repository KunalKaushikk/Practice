#include <iostream>
using namespace std;
void print(int x[], int n)
{
    for (int k = 0; k < n; k++)
    {
        cout << x[k] << " ";
    }
    cout << endl;
}
void sumofsubsets(int s, int k, int sum, int arr[], int x[], int m, int n)
{
    x[k] = 1;
    if (s + arr[k] == m)
    {
        print(x, n);
    }
    else
    {
        if (s + arr[k] + arr[k + 1] <= m)
        {
            sumofsubsets(s + arr[k], k + 1, sum - arr[k], arr, x, m, n);
        }
        if ((s + sum - arr[k] >= m) && (s + arr[k + 1] <= m))
        {
            x[k] = 0;
            sumofsubsets(s, k + 1, sum - arr[k], arr, x, m, n);
        }
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    int x[n];
    int m, sum = 0;
    cin >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        x[i] = 0;
        sum += arr[i];
    }
    sumofsubsets(0, 0, sum, arr, x, m, n);
}