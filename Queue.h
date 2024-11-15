#ifndef QUEUE_H
#define QUEUE_H

#include <stdbool.h>

typedef struct Queue {
    unsigned int* data;
    unsigned int front; 
    unsigned int rear;   
    unsigned int size;   
    unsigned int count;  
} Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newVal);
int dequeue(Queue* q);

bool isEmpty(const Queue* q);
bool isFull(const Queue* q);

#endif
