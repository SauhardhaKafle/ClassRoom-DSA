#ifndef ArrayStack_h
#define ArrayStack_h
#include "../Stack.h"

class ArrayStack : public Stack
{

private:
    // data
    int *myArray;
    int index;
    int maxSize;

public:
    // constructor
    ArrayStack();

    // destructor
    ~ArrayStack();

    // function
    bool isFull();
    bool isEmpty();
    void push(int data);
    int pop();
    int top();
};

#endif
