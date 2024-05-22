#include "./Array/ArrayQueue.h"
#include "./LinkedQueue/LinkedQueue.h"
#include <iostream>

int main()
{

    ArrayQueue Q;
    Q.enqueue(3);
    Q.enqueue(4);
    Q.enqueue(5);

    std::cout << "IsEmpty : " << Q.isEmpty() << "\n";
    std::cout << "isFUll : " << Q.isFull() << "\n";

    int dequeue = Q.dequeue();
    int back = Q.back();
    int front = Q.front();

    std::cout << "dequeue: " << dequeue << "\n"
              << "back : " << back << "\n"
              << "front : " << front << "\n";

    std::cout << "....................Linked Queue..............\n";
    LinkedQueue lq;
    lq.enqueue(9);
    lq.enqueue(2);
    lq.enqueue(3);

    std::cout << "IsEmpty : " << lq.isEmpty() << "\n";
    std::cout << "isFUll : " << lq.isFull() << "\n";

    int dq = lq.dequeue();
    int bq = lq.back();
    int fq = lq.front();

    std::cout << "dequeue : " << dq << "\n"
              << "back : " << bq << "\n"
              << "front : " << fq << "\n";
}

// To compile ; g++ -o myqueue main.cpp LinkedQueue/LinkedQueue.cpp ../../LinkedList/Linkedlist.cpp ./Array/ArrayQueue.cpp
// to run : ./myqueue