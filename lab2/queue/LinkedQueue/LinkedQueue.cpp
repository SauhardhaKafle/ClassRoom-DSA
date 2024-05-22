#include <iostream>
#include "LinkedQueue.h"

// First in first out

LinkedQueue::LinkedQueue(){};

// destructor
LinkedQueue::~LinkedQueue(){};

// checks if the array is full
bool LinkedQueue::isFull()
{

    return false;
};

// checks if the array is empty
bool LinkedQueue::isEmpty()
{
    return this->l.HEAD == nullptr;
};

// gives the first element
int LinkedQueue::front()
{

    return this->l.HEAD->data;
};

// gives the last element
int LinkedQueue::back()
{

    return this->l.TAIL->data;
};

// add element to last
void LinkedQueue::enqueue(int data)
{

    this->l.addToTail(data);
    std::cout << "Enqueued : " << data << "\n";
    return;
};

// remove element from front
int LinkedQueue::dequeue()
{

    int data = this->front();
    this->l.removeHead(this->l);
    return data;
};
