#include <bits/stdc++.h>
using namespace std;
void result(string c)
{
    int t = c.length();
    for (int i = 0; i < t; i++)
    {
        int l = c[i];
        l++;
        char k = char(l);
        cout << k;
    }
}
int main()
{
    string c;
    cin >> c;
    //    cout<<result();
    result(c);
}