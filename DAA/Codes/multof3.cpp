#include <iostream>
using namespace std;
int countmultiple(int n)
{
    int res = 0;
    for (int i = 1; i < n; i++)
    {
        if (i % 3 == 0 || i % 7 == 0)
        {
            res++;
        }
    }
}
int main()
{
    cout << "Count = " << countmultiple(25);
}