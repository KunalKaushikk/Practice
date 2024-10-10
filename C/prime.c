#include <stdio.h>
int main()
{
    int i, a;
    int bool = 0;
    printf("Enter the number to check prime or not : ");
    scanf("%d", &a);
    for (i = 2; i <= a / 2; i++)
    {
        if (a % i == 0)
        {
            bool = 1;
            break;
        }
    }
    if (bool == 1)
    {
        printf("The number is not prime ");
    }
    else
        printf("The number is prime");
    return 0;
}