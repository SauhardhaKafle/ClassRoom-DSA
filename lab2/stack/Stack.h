#ifndef Stack_h
#define Stack_h

class Stack
{

public:
    // constructor
    Stack() {}

    // function
    virtual bool isFull() = 0;
    virtual bool isEmpty() = 0;
    virtual void push(int data) = 0;
    virtual int pop() = 0;
    virtual int top() = 0;

    // destructor
    ~Stack() {}
};

#endif
