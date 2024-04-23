#include <iostream>

// This is the class for Each Node;
class Node
{

public:
    int data;
    Node *next;

    Node(){};

    // Contructor for Node, it accepts the data and store it the the public variable of this class.
    Node(int data)
    {
        this->data = data;
        next = nullptr;
    }

    ~Node(){};
};

/**
 *
 * Linked List class for various functionality of Linked list
 */
class Linkedlist
{

public:
    Node *HEAD;
    Node *TAIL;

    // Initializing Head and tail to nullptr
    Linkedlist() : HEAD(nullptr), TAIL(nullptr){};

    // DEFINE
    void addToHead(int data);
    void addToTail(int data);
    void displayHead();
    void displayTail();
    Node *find(int data, const Linkedlist &list1);
    void insert(int data, int after, const Linkedlist &list1);
    void displayAllData(const Linkedlist &list1);

    // Destructor
    ~Linkedlist(){};
};

/**
 * Adding to the Head, ahead of the list
 * @param data as the data user want to store
 */
void Linkedlist::addToHead(int data)
{

    Node *n1 = new Node(data); // Creating node, passing data.
    if (this->HEAD == nullptr) // If Head is null , it means linkedlist must be empty, so we are pointing tail to n1 also
    {
        this->HEAD = n1;
        this->TAIL = n1;
    }
    else
    {
        // basic
        n1->next = this->HEAD;
        (this->HEAD) = n1;
    }
};

/**
 * Adding to the tail, last of list.
 * @param data as the data user want to store
 *
 */
void Linkedlist::addToTail(int data)
{

    Node *n1 = new Node(data);

    if (this->TAIL == nullptr) // If tail is empty, it also supposed to mean, list is empty: because we were pointing tail already in addtoHead().
    {
        this->HEAD = n1;
        this->TAIL = n1;
    }
    else
    {
        // basic
        (this->TAIL)->next = n1;
        this->TAIL = n1;
        n1->next = nullptr;
    }
};

/**
 * It print out the Element present in the head
 */
void Linkedlist::displayHead()
{

    if (this->HEAD != nullptr)
    {
        std::cout << "display HEAD: " << (this->HEAD)->data << "\n";
    }
    else
    {
        std::cout << "Empty"
                  << "\n";
        return;
    }
};

/**
 * It print out the tail element
 */

void Linkedlist::displayTail()
{

    if (this->TAIL != nullptr)
    {
        std::cout << "display TAIL: " << (this->TAIL)->data << "\n";
    }
    else
    {
        std::cout << "Empty Tail\n";
        return;
    }
};

/**
 * find : it traverse. We are looping through the list to find the data; asked by user.
 * @param data -> data to find
 * @param list1 -> it is the list itself.
 */
Node *Linkedlist::find(int data, const Linkedlist &list1)
{

    if (this->HEAD == nullptr && this->TAIL == nullptr) // Empty condition
    {
        std::cout << "Empty List \n";
        return nullptr;
    }

    Node *temp = this->HEAD; // temporary var

    while (temp != nullptr) // until list is empty
    {

        if (temp->data == data)
        {

            std::cout << "Found : " << temp->data << "\n";
            return temp;
        }
        else
        {

            temp = temp->next; // if not equal, we are moving to next node of list
        }
    }

    std::cout << "didnot find any data"
              << "\n";

    return nullptr;
};

/**
 * insert : to insert data in middle of list, after a node;
 * @param data -> data to insert;
 * @param after-> after which node should we insert?(data given by user)
 * @param list1 -> list itself
 *
 */
void Linkedlist::insert(int data, int after, const Linkedlist &list1)
{

    // We are using already available functionality from find(),
    // this return the address of node when we got the node after which user want to insert the data.
    Node *p = this->find(after, list1);

    if (p != nullptr)
    {
        Node *n1 = new Node(data); // creating node
        n1->next = p->next;
        p->next = n1;
    }
    else
    {
        std::cout << "Could not find the data to insert\n";
        return;
    }
};

/**
 * displayAllData : as name suggest, it display all node->data of list
 * @param list1 -> list itself
 */

void Linkedlist::displayAllData(const Linkedlist &list1)
{

    if (this->HEAD == nullptr && this->TAIL == nullptr)
    {
        std::cout << "Empty List \n";
        return;
    }

    Node *temp = this->HEAD; // temp var

    while (temp != nullptr)
    {

        std::cout << "List : " << temp->data << std::endl; // printing
        temp = temp->next;                                 // advancement of temp pointer
    }

    std::cout << "didnot find any more data"
              << "\n";

    return;
};

int main()
{

    Linkedlist list1; // Creating list

    list1.addToHead(1);
    list1.addToTail(2);
    list1.addToHead(3);

    list1.displayHead();
    list1.displayTail();

    Node *pointer = list1.find(2, list1); // find return the node pointer
    // std::cout << &pointer << "\n"; ////it prints memory address

    list1.insert(9, 1, list1); // inserting data 9 after 1

    list1.displayAllData(list1);
};

/**
 * NOTE:(FIND RUNNING TWICE)
 * -> it is because, displayAllData() is also using find() function. Inside find function there is std::cout << ....
 */