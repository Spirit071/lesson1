#include "queue.h"
#include <cstdlib> 

void initQueue(Queue* q, unsigned int size) {
    if (size == 0) {
        return; // Prevent initialization with size 0
    }
    q->data = (unsigned int*)malloc(size * sizeof(unsigned int));
    if (q->data == nullptr) {
        q->size = 0;
        q->count = 0;
        q->front = 0;
        q->rear = 0;
        return;
    }
    q->front = 0;
    q->rear = 0;
    q->size = size;
    q->count = 0;
}

void cleanQueue(Queue* q) {
    if (q->data != nullptr) {
        free(q->data); 
        q->data = nullptr;
    }
    q->front = 0;
    q->rear = 0;
    q->size = 0;
    q->count = 0;
}

void enqueue(Queue* q, unsigned int newVal) {
    if (isFull(q)) {
        return; 
    }
    q->data[q->rear] = newVal; 
    q->rear = (q->rear + 1) % q->size; 
    q->count++;
}

int dequeue(Queue* q) {
    if (isEmpty(q)) {
        return -1; // Return -1 if the queue is empty
    }
    unsigned int value = q->data[q->front]; 
    q->front = (q->front + 1) % q->size; 
    q->count--; 
    return value;
}

bool isEmpty(const Queue* q) {
    return q->count == 0; // Return true if the queue is empty
}

bool isFull(const Queue* q) {
    return q->count == q->size; // Return true if the queue is full
}
