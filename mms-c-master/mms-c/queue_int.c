#include "queue_int.h"


void initializeQueueInt(QueueInt* q)
{
    q->front = -1;
    q->rear = 0;
}

bool isEmptyQueueInt(QueueInt* q) { 
    return (q->front == q->rear - 1);
}

bool isFullQueueInt(QueueInt* q) { 
    return (q->rear == MAX_SIZE); 
}

void pushQueueInt(QueueInt* q, int value)
{
    if (isFullQueueInt(q)) {
        // printf("Queue is full\n");
        return;
    }
    q->items[q->rear] = value;
    q->rear++;
}

void popQueueInt(QueueInt* q)
{
    if (isEmptyQueueInt(q)) {
        printf("Queue is empty\n");
        return;
    }
    q->front++;
}

int peekQueueInt(QueueInt* q)
{
    if (isEmptyQueueInt(q)) {
        return -1;
    }
    return q->items[q->front + 1];
}

void printQueueInt(QueueInt* q)
{
    if (isEmptyQueueInt(q)) {
        printf("Queue is empty\n");
        return;
    }

    printf("Current Queue: ");
    for (int i = q->front + 1; i < q->rear; i++) {
        printf("%d ", q->items[i]);
    }
    printf("\n");
}

int sizeQueueInt(QueueInt* q){
    return q->rear - q->front - 1;
}

