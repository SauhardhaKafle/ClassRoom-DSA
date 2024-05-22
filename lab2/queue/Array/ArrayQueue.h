#ifndef ArrayQueue_h
#define ArrayQueue_h
#include "../Queue.h"

class ArrayQueue : public Queue
{

private:
    // data
    int *myArray;
    int ifront;
    int iback;
    int maxSize;

public:
    // constructor
    ArrayQueue();

    // destructor
    ~ArrayQueue();

    // function

    bool isFull();
    bool isEmpty();
    void enqueue(int data);
    int dequeue();
    int front();
    int back();
};

#endif
