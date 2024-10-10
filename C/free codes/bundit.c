#include <stdio.h>
int main()
{
    int a, c;
    a = 4;
    c = ++a + ++a;
    printf("%d", c);
    printf("%d", a);
}