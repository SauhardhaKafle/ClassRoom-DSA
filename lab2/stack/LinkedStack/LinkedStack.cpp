#include <iostream>

#include "./LinkedStack.h"

// constructor
LinkedStack::LinkedStack()
{
}

// Destructor
LinkedStack::~LinkedStack(){};

// checking if linked list is empty
bool LinkedStack::isEmpty()
{

    return this->l.HEAD == nullptr;
};

bool LinkedStack::isFull()
{
    return false;
};

// pushing data in linked list
void LinkedStack::push(int data)
{
    this->l.addToTail(data);
    std::cout << "Pushed : " << data << "\n";
    return;
};

// removes the data of last
int LinkedStack::pop()
{
    int data = this->l.TAIL->data;
    this->l.removeTail(this->l);
    return data;
};

int LinkedStack::top()
{

    this->l.displayTail();
    return -1;
}
