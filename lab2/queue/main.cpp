#include "./Array/ArrayQueue.h"
#include <iostream>

int main()
{

    ArrayQueue Q;
    Q.enqueue(3);
    Q.enqueue(4);
    Q.enqueue(5);

    int dequeue = Q.dequeue();
    int back = Q.back();

    std::cout << "dequeue: " << dequeue << "\n"
              << "back : " << back << "\n";
}