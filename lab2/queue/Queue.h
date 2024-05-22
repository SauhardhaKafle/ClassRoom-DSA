#ifndef Queue_h
#define Queue_h

class Queue
{

public:
    // constructor
    Queue() {}

    // function
    virtual bool isFull() = 0;
    virtual bool isEmpty() = 0;
    virtual void enqueue(int data) = 0;
    virtual int dequeue() = 0;
    virtual int front() = 0;
    virtual int back() = 0;

    // destructor
    ~Queue() {}
};

#endif
