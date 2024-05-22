#include <iostream>

#include "./ArrayStack.h"

ArrayStack::ArrayStack()
{

    std::cout << "Enter a Max size of Array\n";
    std::cin >> this->maxSize;

    this->myArray = new int[maxSize];
    this->index = 0;
};

// destructor
ArrayStack::~ArrayStack()
{
    delete[] myArray;
}

// checks if the array is full
bool ArrayStack::isFull()
{

    return this->index >= maxSize;
};

// checks if the array is empty
bool ArrayStack::isEmpty()
{

    return this->index <= 0;
};

// push the data to the array
void ArrayStack::push(int data)
{

    if (this->isFull())
    {
        std::cout << "Array is Full\n";
        return;
    }

    this->myArray[index++] = data;
    std::cout << "Pushed : " << data << "\n";
    return;
};

// remove the last element from array and return
int ArrayStack::pop()
{

    if (this->isEmpty())
    {
        std::cout << "Array is Empty, cannot be pop\n";
        return -1;
    }

    const int temp = this->myArray[--index];
    return temp;
};

// show data of last index
int ArrayStack::top()
{
    if (this->isEmpty())
    {
        std::cout << "Empty Array, no data to top\n";
        return -1;
    }

    return this->myArray[index - 1];
};
