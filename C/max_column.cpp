#include <bits/stdc++.h>
using namespace std;

int result(int arr[], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        int minm = INT_MAX;
        for (int j = 0; j < col; j++)
        {
            minm = min(minm, arr[i][j]);
            if (arr[i][j] == -1)
            {
                arr[i][j] = minm;
            }
        }
    }
}

int main()
{
    int k, row, col;
    cin >> k;
    int arr[k];
    cin >> row >> col;
    cout << result(arr, row, col);
}