#include "LinkedList.h"

LinkedList::LinkedList() : head(nullptr) {}

LinkedList::~LinkedList() {
    while (!isEmpty()) {
        remove();
    }
}

void LinkedList::add(int value) {
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

int LinkedList::remove() {
    if (isEmpty()) return -1;
    Node* temp = head;
    int value = temp->data;
    head = head->next;
    delete temp;
    return value;
}

bool LinkedList::isEmpty() const {
    return head == nullptr;
}
