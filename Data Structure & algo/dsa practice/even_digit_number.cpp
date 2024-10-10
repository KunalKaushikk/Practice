// Incomplete program...

#include <iostream>
using namespace std;
int numbers()
{
    int n;
    int count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        while (arr[n] > 0)
        {
            int num = arr[n] / 10;

            n = n / 10;
            int rem = num % 2;
            if (rem == 0)
            {
                count++;
                cout << count;
            }
        }
    }

    return 0;
}
int main()
{
    int i, n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    return numbers();
}