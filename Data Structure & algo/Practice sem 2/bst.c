#include <stdio.h>
#define SIZE 40
struct queue
{
    int items[SIZE];
    int front;
    int rear;
};
struct queue *createQueue