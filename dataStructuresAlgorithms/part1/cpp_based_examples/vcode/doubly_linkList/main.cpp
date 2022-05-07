#include <iostream>
#include <string>

using namespace std;

class Node{
    public:
        int value;
        Node* next;
        Node* previous;
};

int main()
{
    Node* first = NULL;
    Node* last = NULL;

    // create Node 1
    Node* node1 = new Node();
    node1->value = 100;
    node1->next = NULL;
    node1->previous = NULL;
    first = node1;
    last = node1;

    // create Node 2
    Node* node2 = new Node();
    node2->value = 500;
    node2->next = NULL;
    node2->previous = node1;
    node1->next = node2;
    last = node2;

    // create Node 3
    Node* node3 = new Node();
    node3->value = 1000;
    node3->next = NULL;
    node3->previous = node2;
    node2->next = node3;
    last = node3;

    // Print out forward traverse
    for (Node* forward = first; forward != NULL; forward = forward->next)
    {
        cout << "Value: " << forward->value << endl;
    }

    cout << endl << endl;

    // Print out reverse traverse
    for (Node* backward = last; backward != NULL; backward = backward->previous)
    {
        cout << "Value: " << backward->value << endl;
    }

    return 0;
}