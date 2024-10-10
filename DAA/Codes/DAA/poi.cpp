#include <iostream>
#include <cmath>
using namespace std;

long long krstb(long long x, long long y)
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

    long long ac = krstb(a, c);
    long long bd = krstb(b, d);
    long long abcd = krstb(a + b, c + d);

    return ac * pow(10, n) + (abcd - ac - bd) * pow(10, n / 2) + bd;
}

int main()
{
    long long x, y;
    cin >> x >> y;
    cout << krstb(x, y) << endl;
    return 0;
}