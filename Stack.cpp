#include "Stack.h"

void initStack(Stack* s) {
    new (&s->list) LinkedList();
}

void cleanStack(Stack* s) {
    s->list.~LinkedList();
}

void push(Stack* s, unsigned int element) {
    s->list.add(element);
}

int pop(Stack* s) {
    if (isEmpty(s)) return -1;
    return s->list.remove();
}

bool isEmpty(Stack* s) {
    return s->list.isEmpty();
}

bool isFull(Stack* s) {
    return false;
}
