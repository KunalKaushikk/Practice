#include <stdio.h>
int front = -1;
int rear = -1;

void enqueue(int arr[], int x, int n)
{
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        arr[rear] = x;
    }
    else if (front == (rear + 1) % n)
    {
        printf("-1\n");
    }
    else
    {
        rear = (rear + 1) % n;
        arr[rear] = x;
    }
}
void dequeue(int arr[], int n)
{
    if (front == -1 && rear == -1)
    {
        printf("9999");
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        arr[front] = -1;
        front = (front + 1) % n;
    }
}
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == -1)
        {
            printf("-\n");
        }
        else
            printf("%d\n", arr[i]);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int input;
    for (int i = 0; i < 12; i++)
    {
        scanf("%d", &input);
        if (input == 1)
        {
            int x;
            scanf("%d", &x);
            enqueue(arr, x, n);
        }

        else if (input == 2)
            dequeue(arr, n);
        else if (input == 3)
            display(arr, n);
    }
}