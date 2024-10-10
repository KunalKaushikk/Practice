#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        arr.push_back(temp);
    }
    cout << "Size of vector" << arr.size() << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j] << endl;
        arr.pop_back();
    }
    cout << arr.size() << endl;
}