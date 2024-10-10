#include <iostream>
#include <cmath>
using namespace std;
/*long long karatsuba(long long x, long long y)
{
    if (x < 10 && y < 10)
        return x * y;
    int n = max(log10(x) + 1, log10(y) + 1);
    if (n % 2 != 0)
        n++;
    long long a = x / pow(10, n / 2);
    long long b = x % (long long)pow(10, n / 2);
    long long c = y / pow(10, n / 2);
    long long d = y % (long long)pow(10, n / 2);
    long long ac = karatsuba(a, c);
    long long bd = karatsuba(b, d);
    long long abcd = karatsuba(a + b, c + d);

    return ac * pow(10, n) + (abcd - ac - bd) * pow(10, n / 2) + bd;
}
int main()
{
    long long x, y;
    cin >> x >> y;
    cout << karatsuba(x, y) << endl;
    return 0;
}*/
long long karat(long long x, long long y)
{
    if (x < 10 && y < 10)
    {
        return x * y;
    }
    int n = max(log10(x) + 1, log10(y) + 1);
    long long a = x / (long long)pow(10, n / 2);
    long long b = x % (long long)pow(10, n / 2);
    long long c = y / (long long)pow(10, n / 2);
    long long d = y % (long long)pow(10, n / 2);
    long long ac = karat(a, c);
    long long bd = karat(b, d);
    long long abcd = karat(a + b, c + d);
    return ac * pow(10, n) + (abcd - ac - bd) * pow(10, n / 2) + bd;
}
int main()
{
    long long x, y;
    cin >> x >> y;
    cout << karat(x, y);
    return 0;
}