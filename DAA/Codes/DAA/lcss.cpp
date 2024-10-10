#include <iostream>
#include <cstring>
using namespace std;

int lcs(char s1[], char s2[], int x, int y)
{

    if (x == 0)
    {
        return 1;
    }
    if (y == 0)
    {
        return 0;
    }

    if (s1[x - 1] == s2[y - 1])
        return lcs(s1, s2, x - 1, y - 1);

    return lcs(s1, s2, x, y - 1);
}

int main()
{
    char s1[100], s2[100];
    cin >> s1;
    cin >> s2;
    int x = strlen(s1);
    int y = strlen(s2);
    int a = lcs(s1, s2, x, y);
    if (a == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}