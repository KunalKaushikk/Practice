#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}
int mult(int a, int b)
{
    int d = a * b;
    return d;
}
int table(int a)
{
    int e;
    for (int i = 1; i <= 10; i++)
    {
        e = i * a;
    }
    return e;
}
int main()
{
    int num1, num2;
    cin >> num1 >> num2;
    cout << sum(num1, num2) << " " << mult(num1, num2) << " " << table(num1);
}