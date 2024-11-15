#ifndef LINKEDLIST_H
#define LINKEDLIST_H

struct Node {
    int data;
    Node* next;
};

class LinkedList {
public:
    LinkedList();
    ~LinkedList();  // destructor
    void add(int value);
    int remove();
    bool isEmpty() const;

private:
    Node* head;
};

#endif 
