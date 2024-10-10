#include <iostream>
#include <algorithm>
#include <cstdio>
using namespace std;
/*int main()
{
    int n;
    cin >> n;

    int w[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i];
    }
    int pft[n];
    for (int i = 0; i < n; i++)
    {
        cin >> pft[i];
    }
    int cap;
    cin >> cap;

    pair<int, int> vegs[n];
    for (int i = 0; i < n; i++)
    {
        vegs[i] = make_pair(w[i], pft[i]);
    }
    sort(vegs, vegs + n, [](pair<int, int> a, pair<int, int> b)
         { return (double)a.second / a.first > (double)b.second / b.first; });

    int total_weight = 0;
    double total_profit = 0;

    for (pair<int, int> veg : vegs)
    {
        if (total_weight + veg.first <= cap)
        {
            total_weight += veg.first;
            total_profit += veg.second;
        }
        else
        {
            double fraction = (cap - total_weight) / (double)veg.first;
            total_weight = cap;
            total_profit += fraction * veg.second;
            break;
        }
    }
    printf("%.2f\n", total_profit); // to print upto 2nd decimal
    return 0;
}*/
using namespace std;
struct item
{
    int value, weight;

    item(int value, int weight)
}