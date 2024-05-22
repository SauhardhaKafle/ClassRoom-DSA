#include <iostream>
#include "ArrayQueue.h"

// First in first out

ArrayQueue::ArrayQueue()
{

    std::cout << "Enter a Max size of Array\n";
    std::cin >> this->maxSize;

    this->myArray = new int[maxSize];
    this->ifront = 0;
    this->iback = 0;
};

// destructor
ArrayQueue::~ArrayQueue()
{
    delete[] myArray;
};

// checks if the array is full
bool ArrayQueue::isFull()
{

    return this->iback >= maxSize;
};

// checks if the array is empty
bool ArrayQueue::isEmpty()
{

    return this->ifront >= this->iback;
};

// gives the first element
int ArrayQueue::front()
{

    return this->myArray[this->ifront];
};

// gives the last element
int ArrayQueue::back()
{

    return this->myArray[this->iback - 1];
};

// add element to last
void ArrayQueue::enqueue(int data)
{

    if (this->isFull())
    {
        return;
    }

    this->myArray[this->iback++] = data;
    std::cout << "Enqueued : " << data << "\n";
};

// remove element from front
int ArrayQueue::dequeue()
{

    if (this->isEmpty())
    {
        return -1;
    }

    const int temp = this->myArray[this->ifront++];
    return temp;
};
