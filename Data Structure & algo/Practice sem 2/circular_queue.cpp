#include <iostream>
using namespace std;

int front = -1;
int rear = -1;

void enqueue(int arr[], int element, int N)
{
    if (front == -1 && rear == -1)
    {
        front = 0;
        rear = 0;
        arr[rear] = element;
    }

    else if (((rear + 1) % N) == front)
    {
        cout << "-1" << endl;
    }

    else
    {
        rear = (rear + 1) % N;
        arr[rear] = element;
    }
}

void dequeue(int arr[], int N)
{

    if (front == -1 && rear == -1)
    {
        cout << "9999";
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
    {
        arr[front] = -1;
        front = (front + 1) % N;
    }
}

void display(int arr[], int N)
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == -1)
        {
            cout << "-" << endl;
        }
        else
        {
            cout << arr[i] << endl;
        }
    }
}

int main()
{
    int N;
    cin >> N;

    int arr[N];
    int input;

    for (int i = 0; i < 12; i++)
    {
        cin >> input;

        if (input == 1)
        {
            int element;
            cin >> element;
            enqueue(arr, element, N);
        }

        else if (input == 2)
        {
            dequeue(arr, N);
        }

        else if (input == 3)
        {
            display(arr, N);
        }
    }
}