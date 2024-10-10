#include <stdio.h>
#define SIZE 5
int arr[SIZE];
int front = -1, rear = -1;

int isFull()
{
    if ((front == rear + 1) || (front == 0 && rear == SIZE - 1))
        return 1;
    return 0;
}

int isEmpty()
{
    if (front == -1)
        return 1;
    return 0;
}

void enQueue(int x)
{
    if (isFull())
        printf("-1");
    else
    {
        if (front == -1)
            front = 0;
        rear = (rear + 1) % SIZE;
        arr[rear] = x;
        printf("\n Inserted -> %d", x);
    }
}

int deQueue()
{
    int x;
    if (isEmpty())
    {
        printf("\n Queue is empty !! \n");
        return (-1);
    }
    else
    {
        x = arr[front];
        if (front == rear)
        {
            front = -1;
            rear = -1;
        }

        else
        {
            front = (front + 1) % SIZE;
        }
        printf("\n Deleted element -> %d \n", x);
        return (x);
    }
}

// Display the queue
void display()
{
    int i;
    if (isEmpty())
        printf(" \n Empty Queue\n");
    else
    {
        printf("\n Front -> %d ", front);
        printf("\n Items -> ");
        for (i = front; i != rear; i = (i + 1) % SIZE)
        {
            printf("%d ", arr[i]);
        }
        printf("%d ", arr[i]);
        printf("\n Rear -> %d \n", rear);
    }
}

int main()
{
    deQueue();

    enQueue(1);
    enQueue(2);
    enQueue(3);
    enQueue(4);
    enQueue(5);

    enQueue(6);

    display();
    deQueue();

    display();

    enQueue(7);
    display();
    enQueue(8);

    return 0;
}