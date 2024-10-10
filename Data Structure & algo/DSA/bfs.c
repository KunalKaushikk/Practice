#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int size;
    int f;
    int r;
    int *arr;
};
int isempty(struct queue *q)
{
    if (q->r == q->f)
    {
        return 1;
    }
    return 0;
}
int isfull(struct queue *q)
{
    if (q->r == q->size - 1)
    {
        return 1;
    }
    return 0;
}
void enqueue(struct queue *q, int val)
{
    if (isfull(q))
    {
        printf("This Queue is full\n");
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
    }
}
int dequeue(struct queue *q)
{
    int a = -1;
    if (isempty(q))
    {
        printf("This is queue is empty\n");
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}
int main()
{
    struct queue q;
    q.size = 400;
    q.f = q.r = 0;
    q.arr = (int *)malloc(q.size * sizeof(int));

    int node;
    int i = 1;
    int visited[7] = {0, 0, 0, 0, 0, 0, 0};
    int a[7][7];
    printf("Enter the total nodes of graph:\n ");
    for (int f = 0; f < 7; f++)
    {
        for (int j = 0; j < 7; j++)
        {
            scanf("%d %d", &a[f][j]);
        }
    }
    printf("%d", 1);
    visited[i] = 1;
    enqueue(&q, i);
    while (!isempty(&q))
    {
        int node = dequeue(&q);
        for (int k = 0; k < 7; k++)
        {
            if (a[node][k] == 1 && visited[k] == 0)
            {
                printf("%d", k);
                visited[k] = 1;
                enqueue(&q, k);
            }
        }
    }
    return 0;
}