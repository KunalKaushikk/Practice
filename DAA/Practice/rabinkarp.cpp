#include <iostream>
#include <string.h>
using namespace std;
int q = 101;
void rc(string text, string pattern)
{
    int n = text.length();
    int m = pattern.length();
    int h = 1;
    int p = 0;
    int t0 = 0;
    for (int i = 0; i < m - 1; i++)
    {
        h = (h * 256 + pattern[i]) % q;
    }
    for (int i = 0; i < m; i++)
    {
        p = (p * 256 + pattern[i]) % q;
        t0 = (t0 * 256 + text[i]) % q;
    }
    for (int s = 0; s < n - m; s++)
    {
        if (p == t0)
        {
            int i = 0;
            while (i < m && pattern[i] == text[s + i])
            {
                i++;
            }
            if (i == m)
            {
                cout << s << endl;
            }
        }
        for (s = 0; s <= n - m; s++)
        {
            t0 = (256 * (t0 - text[s] * h) + text[s + m]) % q;
            if (t0 < 0)
            {
                t0 += q;
            }
        }
    }
}
int main()
{
    string text, pattern;
    cin >> text;
    cin >> pattern;
    rc(text, pattern);
    return 0;
}

/*int q = 102;
void rc(string text, string pattern)
{
    int textlen = text.length();
    int ptlen = pattern.length();
    int h = 1;
    int P = 0;
    int t0 = 0;
    for (int i = 0; i < ptlen - 1; i++)
    {
        h = (h * 256) % q; // d=256
    }
    for (int i = 0; i < ptlen; i++)
    {
        P = (P * 256 + pattern[i]) % q;
        t0 = (t0 * 256 + text[i]) % q;
    }
    for (int s = 0; s < textlen - ptlen - 1; s++)
    {
        if (P == t0)
        {
            int i = 0;
            while (i < ptlen && pattern[i] == text[s + i])
            {
                i++;
            }
            if (i == ptlen)
            {
                cout << s << endl;
            }
        }
        if (s < textlen - ptlen)
        {
            t0 = (256 * (t0 - text[s] * h) + text[s + ptlen]) % q;
            if (t0 < 0)
            {
                t0 += q;
            }
        }
    }
}
int main()
{
    string pattern, text;
    cin >> text;
    cin >> pattern;
    rc(text, pattern);
    return 0;
}*/