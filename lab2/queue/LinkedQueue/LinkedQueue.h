#ifndef LinkedQueue_h
#define LinkedQueue_h

#include "../../../LinkedList/Linkedlist.h"
#include "../Queue.h"

class LinkedQueue : public Queue
{
private:
    Linkedlist l;

public:
    LinkedQueue();
    ~LinkedQueue();

    bool isFull();
    bool isEmpty();
    void enqueue(int data);
    int dequeue();
    int front();
    int back();
};

#endif // LINKEDSTACK_H
