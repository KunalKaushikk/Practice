#include <iostream>
using namespace std;
int main()
{
    int arr[10];
    int n, i;
    int c_sum = 0;
    cout << "Enter number of elements in array";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (i = 0; i < n; i++)
    {
        c_sum += arr[i];
        cout << c_sum << " ";
    }
    return 0;
}