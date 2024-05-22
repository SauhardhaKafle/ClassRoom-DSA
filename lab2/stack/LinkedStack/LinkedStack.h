

#ifndef LinkedStack_h
#define LinkedStack_h

#include "../../../LinkedList/Linkedlist.h"
#include "../Stack.h"

class LinkedStack : public Stack
{
private:
    Linkedlist l;

public:
    LinkedStack();
    ~LinkedStack();

    bool isEmpty() override;
    bool isFull() override;
    void push(int data) override;
    int pop() override;
    int top() override;
};

#endif // LINKEDSTACK_H
