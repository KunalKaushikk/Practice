#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    int s;
    int a;

    cout << "Enter size of vector" << endl;
    cin >> s;

    for (int i = 0; i < s; i++)
    { // Use 's' to determine the loop size
        cout << "Enter element " << i << ": " << endl;
        cin >> a;
        v.push_back(a);
    }

    cout << "Elements in the vector:" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    cout << endl; // Add a newline for better formatting

    return 0;
}
