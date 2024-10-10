#include <stdio.h>
int main()
{
    printf("Hello world\n");
    printf("Enter the number for factors ");
    int a, i;
    scanf("%d", &a);
    while (a--)
    {
        if (a % a-- == 0)
        {
            printf(" %d ", a);
        }
    }

    return 0;
}