#include <stdio.h>
int rec_fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * rec_fact(n - 1);
}
int main()
{
    int n;
    scanf("%d", &n);
    printf("%d", rec_fact(n));
}