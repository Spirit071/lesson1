#include "queue.h"

void initQueue(Queue* q, unsigned int size) {
    q->data = (size > 0) ? new unsigned int[size] : nullptr;
    q->front = 0;
    q->rear = 0;
    q->size = size;
    q->count = 0;
}

void cleanQueue(Queue* q) {
    delete[] q->data;
    q->data = nullptr;
    q->front = 0;
    q->rear = 0;
    q->size = 0;
    q->count = 0;
}

void enqueue(Queue* q, unsigned int newVal) {
    if (!isFull(q)) {
        q->data[q->rear] = newVal;
        q->rear = (q->rear + 1) % q->size;
        q->count++;
    }
}

int dequeue(Queue* q) {
    if (isEmpty(q)) return -1;
    unsigned int value = q->data[q->front];
    q->front = (q->front + 1) % q->size;
    q->count--;
    return value;
}

bool isEmpty(const Queue* q) {
    return q->count == 0;
}

bool isFull(const Queue* q) {
    return q->count == q->size;
}
