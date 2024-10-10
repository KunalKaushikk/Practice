#include <bits/stdc++.h>
#include <math.h>
using namespace std;
/* Reverse
int main()
{
    int num;
    int reverse = 0;
    cin >> num;
    while (num > 0)
    {
        int lastdigit = num % 10;
        reverse = reverse * 10 + lastdigit;
        num = num / 10;
    }
    cout << reverse;
    return 0;
} */
/* armstrong

int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int temp = n;
    while (n > 0)
    {
        int lastdigit = n % 10;
        sum += pow(lastdigit, 3); // include math.h, lastdigit to power 3
        n = n / 10;
    }
    if (sum == temp)
    {
        cout << "Armstrong";
    }
    else
    {
        cout << "Not Armstrong";
    }
}*/

/* factorial

int factorial(int n)
{
    int fact = 1;
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i <= n; i++)
        {
            fact = fact * i;
        }
        return fact;
    }
}
int main()
{
    int a;
    cin >> a;
    cout << factorial(a);
}*/