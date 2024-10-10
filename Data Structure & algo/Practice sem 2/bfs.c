#include <stdio.h>
#include <stdlib.h>

int main()
{
    int R, u;
    scanf("%d", &R);

    int arr[R][R];
    int visited[R];

    for (int i = 1; i <= R; i++)
    {
        for (int j = 1; j <= R; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int k = 1; k <= R; k++)
    {
        visited[k] = 0;
    }

    void DFS(int i)
    {
        printf("%d ", i);
        visited[i] = 1;
        for (int j = 1; j <= N; j++)
        {
            if (A[i][j] == 1 && !visited[j])
            {
                DFS(j);
            }
        }
    }

    scanf("%d", &x);
    DFS(u);
    return 0;
}