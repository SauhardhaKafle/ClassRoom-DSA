#include <iostream>
#include "./Array/ArrayStack.h"
#include "./LinkedStack/LinkedStack.h"

int main()
{
    ////////////////////////Array stack
    ArrayStack s;
    s.push(5);
    s.push(1);
    s.push(3);
    int p = s.pop();
    int t = s.top();

    std::cout << "\npop : " << p << "\ntop : " << t << "\n\n";

    bool empty = s.isEmpty();
    bool full = s.isFull();
    std::cout << "Empty : " << empty << "\nfull: " << full << "\n";

    ////////////////////////////Linkedlist stack
    //////to compile : g++ -o mystack main.cpp LinkedStack/LinkedStack.cpp ../../LinkedList/Linkedlist.cpp Array/ArrayStack.cpp
    /////to run : ./mystack

    std::cout << "..................Linkedlist Stack................\n";
    LinkedStack l;
    l.push(5);
    l.top();
}
